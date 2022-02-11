![](https://s3.amazonaws.com/intranet-projects-files/holbertonschool-low_level_programming/248/willy-wonka.png)

# 0x1B. C - Sorting algorithms & Big O

------------

## General

- At least four different sorting algorithms
- What is the Big O notation, and how to evaluate the time complexity of an algorithm
- How to select the best sorting algorithm for a given input
- What is a stable sorting algorithm

------------

## Data Structure and Functions

------------
For this project you are given the following print_array, and print_list functions:

```
#include <stdlib.h>
#include <stdio.h>

/**
 * print_array - Prints an array of integers
 *
 * @array: The array to be printed
 * @size: Number of elements in @array
 */
void print_array(const int *array, size_t size)
{
    size_t i;

    i = 0;
    while (array && i < size)
    {
        if (i > 0)
            printf(", ");
        printf("%d", array[i]);
        ++i;
    }
    printf("\n");
}
```
```
#include <stdio.h>
#include "sort.h"

/**
 * print_list - Prints a list of integers
 *
 * @list: The list to be printed
 */
void print_list(const listint_t *list)
{
    int i;

    i = 0;
    while (list)
    {
        if (i > 0)
            printf(", ");
        printf("%d", list->n);
        ++i;
        list = list->next;
    }
    printf("\n");
}
```
```
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
```
------------

## Big-O Notation

Asymptotic notation is a set of languages which allow us to express the performance of our algorithms in relation to their input. Big O notation is used in Computer Science to describe the performance or complexity of an algorithm. Big O specifically describes the worst-case scenario, and can be used to describe the execution time required or the space used (e.g. in memory or on disk) by an algorithm.


![](https://raw.githubusercontent.com/developerinsider/developer-insider-content/master/POST/C/Tuto/BigO/BigOComplexity.png)

------------

## List of poinst.

|  Point | What is done at this point? | level |
| ------------ | ------------ | ------------ |
| 0-bubble_sort.c | Write a function that sorts an array of integers in ascending order using the Bubble sort algorithm | Mandatory |
| 0-O | Write in the file 0-O, the big O notations of the time complexity of the Bubble sort algorithm, with 1 notation per line: | Mandatory |
| 1-insertion_sort_list.c | Write a function that sorts a doubly linked list of integers in ascending order using the Insertion sort algorithm | Mandatory |
| 1-O  | Write in the file 1-O, the big O notations of the time complexity of the Insertion sort algorithm, with 1 notation per line: | Mandatory |
| 2-selection_sort.c |Write a function that sorts an array of integers in ascending order using the Selection sort algorithm | Mandatory |
| 2-O |Write in the file 2-O, the big O notations of the time complexity of the Selection sort algorithm, with 1 notation per line: | Mandatory |

------------

# Documentation:
### Links:

- https://www.cs.us.es/~jalonso/cursos/i1m-19/temas/tema-28.html
- https://www.bigocheatsheet.com/
- https://paginadec.webcindario.com/old/ordenamiento-metodos.html
- https://developerinsider.co/big-o-notation-explained-with-examples/
- https://www.youtube.com/watch?v=kPRA0W1kECg
- https://www.toptal.com/developers/sorting-algorithms
- https://stackoverflow.com/questions/487258/what-is-a-plain-english-explanation-of-big-o-notation
- https://en.wikipedia.org/wiki/Sorting_algorithm
- https://www.youtube.com/watch?v=lyZQPjUT5B4&feature=emb_title
- https://www.youtube.com/watch?v=MyAiCtuhiqQ

------------

# Author


## Juan Sebastian Avendaño Gonzalez:
- Git: https://github.com/AvendanoisPepe
- Twitter: https://twitter.com/Sebastian_Aven
- Linkedin: https://www.linkedin.com/in/juan-sebastian-avenda%C3%B1o-gonz%C3%A1lez-8b1185200/

## Reinaldo Castro:
- Git: https://github.com/Rcastro89
- Twitter: https://twitter.com/ReinaldoC89
- Linkedin: https://www.linkedin.com/in/reinaldo-alberto-castro-montilla-410b09221/

------------


![](https://scontent.fbog4-1.fna.fbcdn.net/v/t39.30808-6/273623205_3099106633687379_7216100687296338286_n.jpg?_nc_cat=100&ccb=1-5&_nc_sid=730e14&_nc_ohc=YPwk5OFiqcUAX8zktrj&_nc_ht=scontent.fbog4-1.fna&oh=00_AT89cTJ6mcJToKsueWzppSi8ypUHbIbu9Ch8Pgd4C-wNkA&oe=620BA211)