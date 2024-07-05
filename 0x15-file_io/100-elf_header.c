#include "main.h"
#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>


/**
 * check_if_elf - A function that checks if a file is an ELF file
 * @e_ident: A pointer to an array containing the ELF magic numbers.
 *
 * Description: If file is not an ELF file - exit with code (98).
 *
 * Return: void
 */
void check_if_elf(unsigned char *e_ident)
{
	int i = 0;

	while (i < 4)
	{
		if (e_ident[i] != 127 && e_ident[i] != 'E' &&
		    e_ident[i] != 'L' && e_ident[i] != 'F')
		{
			dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
			exit(98);
		}
		i++;
	}
}

/**
 * prnt_magic_no - A function that print magic number of an ELF file.
 * @e_ident: A pointer to an array containing the magic number of the Elf file.
 *
 * Description: Space separated magic number.
 *
 * Return: void
 */
void prnt_magic_no(unsigned char *e_ident)
{
	int n = 0;

	printf("  Magic:    ");

	while (n < EI_NIDENT)
	{
		printf("%02x", e_ident[n]);
		if (n == EI_NIDENT - 1)
			printf("\n");
		else
			printf(" ");
		n++;
	}
}
/**
 * prnt_class - A function that prints the class of an ELF header.
 * @e_ident: A pointer to an array containing the magic number of the ELF file
 *
 * Descriptor: Space separated class case
 *
 * Return: void
 */
void prnt_class(unsigned char *e_ident)
{
	printf("  Class:                              ");

	switch (e_ident[EI_CLASS])
	{
	case ELFCLASSNONE:
		printf("none\n");
		break;
	case ELFCLASS32:
		printf("ELF32\n");
		break;
	case ELFCLASS64:
		printf("ELF64\n");
		break;
	default:
		printf("<unknown: %x>\n", e_ident[EI_CLASS]);
	}
}

/**
 * prnt_data - A function that prints the data of an ELF heade.
 * @e_ident: A pointer to the array containing the ELF class.
 *
 * Return: void.
 */
void prnt_data(unsigned char *e_ident)
{
        printf("  Data:                              ");

        switch (e_ident[EI_DATA])
	{
	case ELFDATANONE:
		printf("none\n");
		break;
        case ELFDATA2LSB:
		printf("2's complement, little endian\n");
		break;
	case ELFDATA2MSB:
		printf("2's complement, big endian\n");
		break;
	default:
		printf("<unknown: %x>\n", e_ident[EI_CLASS]);
	}
}

/**
 * prnt_version - A function that prints the version of the ELF header
 * @e_ident: A pointer to the array containg the ELF magic number.
 *
 * Return: void
 */
void prnt_version(unsigned char *e_ident)
{
	printf("  Version:                            %d",
			e_ident[EI_VERSION]);

	switch (e_ident[EI_VERSION])
	{
	case EV_CURRENT:
		printf(" (current)\n");
		break;
	default:
		printf("\n");
		break;
	}
}

/**
 * prnt_osabi - A function that prints the OS/ABI of an ELF header.
 * @e_ident: A pointer to the array containing the ELF magic number.
 *
 * Return: void
 */
void prnt_osabi(unsigned char *e_ident)
{
	printf("  OS/ABI:                              ");

	switch (e_ident[EI_OSABI])
	{
		case ELFOSABI_NONE:
			printf("UNIX - System V\n");
			break;
		case ELFOSABI_HPUX:
			printf("UNIX - HP-UX\n");
			break;
		case ELFOSABI_NETBSD:
			printf("UNIX - NetBSD\n");
			break;
		case ELFOSABI_LINUX:
			printf("UNIX - Linux\n");
			break;
		case ELFOSABI_SOLARIS:
			printf("UNIX - Solaris\n");
			break;
		case ELFOSABI_IRIX:
			printf("UNIX - IRIX\n");
			break;
		case ELFOSABI_FREEBSD:
			printf("UNIX - FreeBSD\n");
			break;
		case ELFOSABI_TRU64:
			printf("UNIX - TRU64\n");
			break;
		case ELFOSABI_ARM:
			printf("ARM\n");
			break;
		case ELFOSABI_STANDALONE:
			printf("Standalone App\n");
			break;
		default:
			printf("<unknown: %x>\n", e_ident[EI_OSABI]);
	}
}
/**
 * prnt_abi - A function that prints the ABI version of an ELF header.
 * @e_ident: A pointer to the array containing the ELF ABI version.
 *
 * Return: void.
 */
void prnt_abi(unsigned char *e_ident)
{
	printf("  ABI Version:                        %d\n",
		e_ident[EI_ABIVERSION]);
}

/**
 * prnt_typ - A function that print the type of an ELF header.
 * @e_ident: A pointer to the array containing the ELF classs.
 * @e_type: The ELF type.
 *
 * Return: void.
 */
void prnt_typ(unsigned int e_type, unsigned char *e_ident)
{
	if (e_ident[EI_DATA] == ELFDATA2MSB)
		e_type >>= 8;

	printf("  Type:                                ");

	switch (e_type)
	{
	case ET_NONE:
		printf("NONE (None)\n");
		break;
	case ET_REL:
		printf("REL (Relocatable file)\n");
		break;
	case ET_EXEC:
		printf("EXEC (Executable file)\n");
		break;
	case ET_DYN:
		printf("DYN (Shared object file)\n");
		break;
	case ET_CORE:
		printf("CORE (Core file)\n");
		break;
	default:
		printf("unknown: %x>\n", e_type);
	}
}
/**
 * prnt_entry - A function that prints the entry point of an ELF header.
 * @e_entry: The address of the ELF entry point.
 * @e_ident: A pointer to the array containing the ELF class.
 *
 * Return: void.
 */
void prnt_entry(unsigned long int e_entry, unsigned char *e_ident)
{
	printf("  Entry point address:                ");

	if (e_ident[EI_DATA] == ELFDATA2MSB)
	{
		e_entry = ((e_entry << 8) & 0xFF00FF00) | ((e_entry >> 8) & 0xFF00FF);
		e_entry = (e_entry << 16) | (e_entry >> 16);
	}

	if (e_ident[EI_CLASS] == ELFCLASS32)
		printf("%#x\n", (unsigned int)e_entry);
	else
		printf("%#lx\n", e_entry);
}
/**
 * close_elf - A function that closes an ELF file.
 * @elf: The file descriptor of the ELF file.
 *
 * Descriptor: If the file cannot be closed - exit with code 98.
 *
 * Return: void.
 */
void close_elf(int elf)
{
	if (close(elf) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", elf);
		exit(98);
	}
}
/**
 * main - The main function that displays the information contained in
 *	the ELF header at the start of an ELF file.
 * @argc: The count of the arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Description: If function fails or file is not an ELF file - exit code 98.
 *
 * Return: 0 on success.
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	Elf64_Ehdr *header;
	int op, rd;

	op = open(argv[1], O_RDONLY);
	if (op == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't open file %s\n", argv[1]);
		exit(98);
	}
	header = malloc(sizeof(Elf64_Ehdr));
	if (!header)
	{
		close_elf(op);
		dprintf(STDERR_FILENO, "Error: Header file not exist %s\n", argv[1]);
		exit(98);
	}
	rd  = read(op, header, sizeof(Elf64_Ehdr));
	if (rd == -1)
	{
		free(header);
		close_elf(op);
		dprintf(STDERR_FILENO, "Error: `%s` : No header file\n", argv[1]);
		exit(98);
	}

	check_if_elf(header->e_ident);
	printf("ELF Header:\n");
	prnt_magic_no(header->e_ident);
	prnt_class(header->e_ident);
	prnt_data(header->e_ident);
	prnt_version(header->e_ident);
	prnt_osabi(header->e_ident);
	prnt_abi(header->e_ident);
	prnt_typ(header->e_type, header->e_ident);
	prnt_entry(header->e_entry, header->e_ident);

	free(header);
	close_elf(op);
	return (0);
}
