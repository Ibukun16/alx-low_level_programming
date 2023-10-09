#ifndef MAIN_FILE
#define MAIN_FILE

int _putchar(char c);
void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
void *_calloc(unsigned int nmemb, unsigned int size);
int *array_range(int min, int max);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
int check_dgt(char *c);
int _strlen(char *s);
void _error(void);
int main(int argc, char *argv[]);

#endif /* MAIN_FILE */
