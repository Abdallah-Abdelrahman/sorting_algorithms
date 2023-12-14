#ifndef HEADER
#define HEADER
#include <stdlib.h>
#include <stdio.h>

/*-------------------- MACROS ------------------------*/

/*-------------------- ALIASES ------------------------*/

/*-------------------- STRUCTS ------------------------*/
/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;


/*-------------------- UTILS ------------------------*/
void print_array(const int *array, size_t size);
void print_list(const listint_t *list);
void insertion_sort_list(listint_t **list);

/*-------------------- MOCKS ------------------------*/
#endif /* HEADER */
