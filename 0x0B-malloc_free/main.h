#ifndef _MAIN_HEADER_
#define _MAIN_HEADER_

char *_strdup(char *str);
char **strtow(char *str);
int count_words(char *str);
char *argstostr(int ac, char **av);
char *str_concat(char *s1, char *s2);
void free_grid(int **grid, int height);
int **alloc_grid(int width, int height);
char *create_array(unsigned int size, char c);

#endif /** _MAIN_HEADER_ **/
