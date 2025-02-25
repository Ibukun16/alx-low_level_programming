#ifndef _MAIN_HEADER_
#define _MAIN_HEADER_

int _abs(int n);
int _atoi(char *s);
int _isalpha(int c);
int _isupper(int c);
int _isdigit(int c);
int _islower(int c);
int _putchar(char c);
int _strlen(char *s);
void _puts(char *str);
char *_strchr(char *s, char c);
int _strcmp(char *s1, char *s2);
char *_strcat(char *dest, char *src);
char *_strcpy(char *dest, char *src);
char *_strpbrk(char *s, char *accept);
char *_strstr(char *haystack, char *needle);
unsigned int _strspn(char *s, char *accept);
char *_strncpy(char *dest, char *src, int n);
char *_strncat(char *dest, char *src, int n);
char *_memset(char *s, char b, unsigned int n);
char *_memcpy(char *dest, char *src, unsigned int n);

#endif /** _MAIN_HEADER_ **/
