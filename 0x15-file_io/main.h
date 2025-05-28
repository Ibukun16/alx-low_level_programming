#ifndef MAIN_HEADER_FILE
#define MAIN_HEADER_FILE

#include <stdio.h>
#include <string.h>
#include <stdarg.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <fcntl.h>
#include <elf.h>
#include <errno.h>

#define BUFFER_SIZE 1024
#define ERR_EXIT 98

void close_file(int fd);
int cp(char *fd_from, char *fd_to);
void check_elf(unsigned char *e_ident);
void print_data(unsigned char *e_ident);
void print_class(unsigned char *e_ident);
void print_version(unsigned char *e_ident);
void print_magic_no(unsigned char *e_ident);
void print_abiversion(unsigned char *e_ident);
int create_file(const char *filename, char *text_content);
ssize_t read_textfile(const char *filename, size_t letters);
void print_type(unsigned int e_type, unsigned char *e_ident);
int append_text_to_file(const char *filename, char *text_content);
void print_entry(unsigned long int e_entry, unsigned char *e_ident);

#endif /** MAIN_HEADER_FILE **/
