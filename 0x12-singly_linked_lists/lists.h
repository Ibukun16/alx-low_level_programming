#ifndef _MAIN_HEADER_FILE_
#define _MAIN_HEADER_FILE_

#include <stddef.h>
/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

int _putchar(char c);
void free_list(list_t *head);
size_t list_len(const list_t *h);
size_t print_list(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);

#endif /** _MAIN_HEADER_FILE_ **/
