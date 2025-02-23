#ifndef _HEADER_FILE_
#define _HEADER_FILE_

int _putchar(char c);
char *_strchr(char *s, char c);
void print_chessboard(char (*a)[8]);
void set_string(char **s, char *to);
char *_strpbrk(char *s, char *accept);
 void print_diagsums(int *a, int size);
char *_strstr(char *haystack, char *needle);
unsigned int _strspn(char *s, char *accept);
char *_memset(char *s, char b, unsigned int n);
char *_memcpy(char *dest, char *src, unsigned int n);

#endif /** _HEADER_FILE_ **/
