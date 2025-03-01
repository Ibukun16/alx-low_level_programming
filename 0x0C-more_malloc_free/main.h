#ifndef _MAIN_HEADER_
#define _MAIN_HEADER_

int _putchar(char c);
int is_digit(char *s);
int _strlen(char *str);
int main(int argc, char **argv);
int *array_range(int min, int max);
void *malloc_checked(unsigned int b);
void *_calloc(unsigned int nmemb, unsigned int size);
char *string_nconcat(char *s1, char *s2, unsigned int n);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);

#endif /** _MAIN_HEADER_ **/
