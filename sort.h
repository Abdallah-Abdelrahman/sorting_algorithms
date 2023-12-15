#ifndef HEADER
#define HEADER
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

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

/*------------------ PROTOTYPES ---------------------*/
void bubble_sort(int *array, size_t size);
void selection_sort(int *array, size_t size);
void shell_sort(int *array, size_t size);
void counting_sort(int *array, size_t size);
void heap_sort(int *array, size_t size);
void heapify(int *array, size_t size);
void sift_down(int *array, size_t start, size_t end, size_t size);

/*-------------------- UTILS ------------------------*/
void print_array(const int *array, size_t size);
void print_list(const listint_t *list);
void insertion_sort_list(listint_t **list);
void quick_sort(int *array, size_t size);
void _qsort(int *arr, int lo, int hi, size_t size);
int partition(int *arr, int lo, int hi, size_t size);
void swap(int *array, size_t i, size_t j);

/*-------------------- MOCKS ------------------------*/
#endif /* HEADER */
