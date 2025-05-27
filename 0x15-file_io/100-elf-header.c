#include "main.h"

#define ERROR_EXIT(err_msg) \
do { \
	dprint(STDERR_FILENO, "Error: %s\n", err_msg); \
	exit(98); \
} while (0)

/**
 * print_error - A function that prints error message to the stdout
 * @err_msg: Pointer to the error message string
 *
 * Return: Nothing
 */
void print_error(const char *err_msg)
{
	fprintf(stderr, "Error: %s\n", err_msg);
	exit(ERR_EXIT);
}

/**
 * print_error_errno - A function that prints error message
 * @err_msg: Pointer to the error message string
 *
 * Return: Nothing
 */
void print_error_errno(const char *err_msg)
{
	fprintf(stderr, "Error: %s: %s\n", err_msg, strerror(errno));
	exit(ERR_EXIT);
}

/**
 * check_elf - A function that checks if a file is an elf file
 * @e_ident: Pointer to the identifier array containing the elf magic number
 *
 * Description: If a file is not an ELF file - exit with code (98)
 *
 * Return: Nothing
 */
void check_elf(unsigned char *e_ident)
{
	if (e_ident[EI_MAG0] != ELFMAG0 || e_ident[EI_MAG1] != ELFMAG1 ||
		e_ident[EI_MAG2] != ELFMAG2 || e_ident[EI_MAG3] != ELFMAG3)
		print_error("Not an ELF file");
}

/**
 * print_magic_no - A function that print magic number of an elf file
 * @e_ident: Pointer to the identifier array containing the elf magic number
 *
 * Description: If a file is not a magic number - exit with code (98)
 *
 * Return: Nothing
 */
void print_magic_no(unsigned char *e_ident)
{
	int i;

	printf("ELF Header:\n");
	printf("  Magic:    ");
	for (i = 0; i < EI_NIDENT; i++)
	{
		printf("%2.2x", e_ident[i]);
		if (i < EI_NIDENT - 1)
			printf(" ");
	}
	printf("\n");
}

/**
 * print_class - A function that prints the class that an ELF header belong
 * @class: The class of the ELF header
 *
 * Return: Nothing
 */
void print_class(unsigned char class)
{
	printf("  Class:                             ");
	switch (class)
	{
	case ELFCLASSNONE:
		printf("None\n");
		break;
	case ELFCLASS32:
		printf("ELF32\n");
		break;
	case ELFCLASS64:
		printf("ELF64\n");
		break;
	default:
		printf("<unknown: %x>\n", class);
	}
}

/**
 * print_data - A function that prints an ELF header data
 * @data: The ELF header data
 *
 * Return: Nothing
 */
void print_data(unsigned char data)
{
	printf("  Data:                                ");
	switch (data)
	{
	case ELFDATANONE:
		printf("None\n");
		break;
	case ELFDATA2LSB:
		printf("2's complement, little endian\n");
		break;
	case ELFDATA2MSB:
		printf("2's complement, big endian\n");
		break;
	default:
		printf("<unknown: %x>\n", data);
	}
}

/**
 * print_version - A function that prints the version of the ELF header
 * @version: The version of the ELF header
 *
 * Return: Nothing
 */
void print_version(unsigned char version)
{
	printf("  version:                                  ");
	switch (version)
	{
	case EV_NONE:
		printf("0 (invalid)\n");
		break;
	case EV_CURRENT:
		printf("%d (current)\n", version);
		break;
	default:
		printf("%d\n", version);
	}
}

/**
 * print_osabi_1 - A function that print the OS/ABI of an ELF header
 * @osabi: The string of the ELF magic number
 *
 * Return: Nothing
 */
void print_osabi_1(unsigned char osabi)
{
	printf("  OS/ABI:                                     ");
	switch (osabi)
	{
	case ELFOSABI_SYSV:
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
	case ELFOSABI_IRIX:
		printf("UNIX - Irix\n");
		break;
	default:
		printf("<unknown: %x>\n", osabi);
	}
}

/**
 * print_osabi_2 - A function that print the OS/ABI of an ELF header
* @osabi: The string of the ELF magic number
*
* Return: Nothing
*/
void print_osabi_2(unsigned char osabi)
{
	printf("  OS/ABI                                        ");
	switch (osabi)
	{
	case ELFOSABI_SOLARIS:
		printf("UNIX - Solaris\n");
		break;
	case ELFOSABI_AIX:
		printf("UNIX - AIX\n");
		break;
	case ELFOSABI_FREEBSD:
		printf("UNIX - FreeBSD\n");
		break;
	case ELFOSABI_TRU64:
		printf("UNIX - TRU64\n");
		break;
	case ELFOSABI_MODESTO:
		printf("Novell - Modesto\n");
		break;
	case ELFOSABI_OPENBSD:
		printf("UNIX - OpenBSD\n");
		break;
	case ELFOSABI_ARM_AEABI:
		printf("ARM EABI\n");
		break;
	case ELFOSABI_ARM:
		printf("ARM\n");
		break;
	case ELFOSABI_STANDALONE:
		printf("Standalone App\n");
		break;
	default:
		printf("<unknown: %x>\n", osabi);
	}
}

/**
 * print_abiversion - A function that prints the ABI version of the ELF header
 * @abiversion: The sring containg the ABI version of ELF header
 *
 * Return: Nothing
 */
void print_abiversion(unsigned char abiversion)
{
	printf("  ABI Version:                           %d\n", abiversion);
}

/**
 * print_type - A function that print the type of an ELF header
 * @type: The type of the ELF header
 * @data: The string of the ELF header
 *
 * Return: Nothing
 */
void print_type(unsigned int type, unsigned char data)
{
	if (data == ELFDATA2MSB)
		type = (type >> 8) | (type << 8);

	printf("  Type:                                           ");
	switch (type)
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
		printf("<unknown>: %x\n", type);
	}
}

/**
 * print_entry_32 - A function that prints entry 32 version of the ELF header
 * @entry: Integer value of the entry point into the ELF header
 * @data: The data string of the ELF header
 *
 * Return: Nothing
 */
void print_entry_32(unsigned int entry, unsigned char data)
{
	if (data == ELFDATA2MSB)
	{
		entry = ((entry & 0x000000ff) << 24) |
			((entry & 0x0000ff00) << 8) |
			((entry & 0x00ff0000) >> 8) |
			((entry & 0xff000000) >> 24);
	}
	printf("  Entry point address:                      0x%x\n", entry);
}

/**
 * print_entry_64 - A function that print entry 64 version of the ELF header
 * @entry: Integer value of the entry point into the ELF header
 * @data: The data string of the ELF header
 *
 * Return: Nothing
 */
void print_entry_64(unsigned long entry, unsigned char data)
{
	if (data == ELFDATA2MSB)
	{
		entry = ((entry & 0x00000000000000FFUL) << 56) |
			((entry & 0x000000000000FF00UL) << 40) |
			((entry & 0x0000000000FF0000UL) << 24) |
			((entry & 0x00000000FF000000UL) << 8) |
			((entry & 0x000000FF00000000UL) >> 8) |
			((entry & 0x0000FF0000000000UL) >> 24) |
			((entry & 0x00FF000000000000UL) >> 40) |
			((entry & 0xFF00000000000000UL) >> 56);
	}
	printf("  Entry point address:                   0x%lx\n", entry);
}

/**
 * close_elf - A function that closes an ELF file
 * @file: The ELF file
 *
 * Return: Nothing
 */
void close_elf(int file)
{
	if (close(file) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close file %d\n", file);
	       exit(98);
	}
}
/**
 * main - The main function that display the information contained in the
 * ELF header at the start of an ELF file.
 * @argc: The count of the number of arguments provided to the command line
 * @argv: Double pointer to the array of the arguments supplied
 * to the command line
 *
 * Return: 0 for success and -1 for failure
 */
int main(int argc, char **argv)
{
	int fd;
	ssize_t rd, rd2;
	Elf64_Ehdr *ehdr;
	unsigned char buf[sizeof(Elf64_Ehdr)];

	if (argc != 2)
		print_error("Usage: elf_header elf_filename");
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
		print_error_errno("Can't open file");
	rd = read(fd, buf, sizeof(Elf64_Ehdr));
	if (rd < (ssize_t)sizeof(Elf32_Ehdr))
		print_error_errno("Failed to read ELF header");
	check_elf(buf),	ehdr = (Elf64_Ehdr *)buf, print_magic_no(buf);
	print_class(buf[EI_CLASS]), print_data(buf[EI_DATA]);
	print_version(buf[EI_VERSION]),	print_osabi_1(buf[EI_OSABI]);
	print_osabi_2(buf[EI_OSABI]), print_abiversion(buf[EI_ABIVERSION]);
	if (buf[EI_CLASS] == ELFCLASS32)
	{
		if (rd < (ssize_t)sizeof(Elf32_Ehdr))
			print_error("Incomplete ELF32 header");
		print_type(((Elf32_Ehdr *)buf)->e_type, buf[EI_DATA]);
		print_entry_32(((Elf32_Ehdr *)buf)->e_entry, buf[EI_DATA]);
	}
	else if (buf[EI_CLASS] == ELFCLASS64)
	{
		if (rd < (ssize_t)sizeof(Elf64_Ehdr))
		{
			rd2 = read(fd, buf + rd, sizeof(Elf64_Ehdr) - rd);
			if (rd2 < 0 || rd + rd2 < (ssize_t)sizeof(Elf64_Ehdr))
				print_error("Incomplete ELF64 header");
		}
		print_type(ehdr->e_type, buf[EI_DATA]);
		print_entry_64(ehdr->e_entry, buf[EI_DATA]);
	}
	else
		print_error("Unknown ELF class");
	close_elf(fd);
	return (0);
}
