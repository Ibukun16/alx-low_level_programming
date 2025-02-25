#ifndef _MAIN_H_
#define _MAIN_H_

int _putchar(char c);
void error_handler(void);
int str_len(char *str);
int is_digit(char *str);
void *malloc_checked(unsigned int b);
int *array_range(int min, int max);
void *_calloc(unsigned int nmemb, unsigned int size);
char *string_nconcat(char *s1, char *s2, unsigned int n);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);

#endif /** _MAIN_H_ **/
