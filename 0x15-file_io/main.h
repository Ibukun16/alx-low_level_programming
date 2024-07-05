#ifndef MAIN_HEADER_FILE
#define MAIN_HEADER_FILE

#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <fcntl.h>
#include <elf.h>

void check_if_elf(unsigned char *identfr);
void prnt_magic_no(unsigned char *identfr);
void prnt_class(unsigned char *identfr);
void prnt_data(unsigned char *identfr);
void prnt_version(unsigned char *identfr);
void prnt_osabi(unsigned char *identfr);
void prnt_abi(unsigned char *identfr);
void prnt_typ(unsigned int typ, unsigned char *identfr);
void prnt_entry(unsigned long int ntry, unsigned char *identfr);
void close_elf(int elf_file);
int main(int __attribute__((__unused__)) argc, char *argv[]);

int _putchar(char c);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
int cp(char *file_from, char *file_to);
int main(int argc, char **argv);
void close_file(int d);
#endif /** MAIN_HEADER_FILE **/
