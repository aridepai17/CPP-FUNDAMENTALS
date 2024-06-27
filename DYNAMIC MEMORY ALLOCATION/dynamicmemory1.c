/*
C/C++ programs are provided with different types of memory management areas.
-> Stack - Allocated automatically for local variables.
-> Data Section - Allocated for global and static data.
-> Heap - Allocated at runtime.

All the memory is taken from the process address space.
-> C/C++ programs provide support for memory allocation at runtime. (Dynamic memory allocation)
-> Allocations on the heap have to be managed by the programmer.
-> Stack and data section allocations are managed on runtime.

DIFFERENT FUNCTIONS FOR ALLOCATION MEMORY FROM HEAP
-> malloc() - Allocates raw memory on the heap.
-> calloc() - Allocates memory on the heap and initializes it to 0.
-> realloc() - Allocates larfer chunk of memory for an existing allocation.
-> free() - Deallocates/releases the memory allocated through the above functions.
*/

/*
Dangling pointer points to an invalid address and is very dangerous.
After freeing the memory of a pointer, you should always assign NULL to the pointer.


*/ 

/*
#include <stdio.h>                             // malloc() in C++
#include <stdlib.h>
int main(){
    int *p = (int *) malloc (sizeof(int));
    *p = 10;
    printf("%d\n",*p);
    free(p);
    p = NULL;
    free(p);
    return 0;
}
*/

/*
#include <stdio.h>                             // calloc() in C++
#include <stdlib.h>
int main(){
    int *p = (int *) calloc (1, sizeof(int)); // Two arguments - number of elements and size of each element
    int *p = (int *) malloc (10 * sizeof(int)); // Usage of malloc() to point to an array of 10 integers
    if (p == NULL){
        printf("Failed to allocate memory\n");
        return -1;
    }
    *p = 10;
    printf("%d\n",*p);
    free(p);
    p = NULL;
    free(p);
    return 0;
}
*/

