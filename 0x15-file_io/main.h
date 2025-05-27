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
void print_data(unsigned char data);
void print_osabi_1(unsigned char osabi);
void print_osabi_2(unsigned char osabi);
void print_version(unsigned char version);
void print_error(const char *err_msg);
void check_elf(unsigned char *e_ident);
void print_class(unsigned char class);
void print_error_errno(const char *err_msg);
void print_magic_no(unsigned char *e_ident);
void print_abiversion(unsigned char abiversion);
void print_entry_32(unsigned int entry, unsigned char data);
void print_entry_64(unsigned long entry, unsigned char data);
int create_file(const char *filename, char *text_content);
ssize_t read_textfile(const char *filename, size_t letters);
int append_text_to_file(const char *filename, char *text_content);

#endif /** MAIN_HEADER_FILE **/
