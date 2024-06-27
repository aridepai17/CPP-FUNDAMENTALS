/*
DYNAMIC MEMORY ALLOCATION IN C++
-> C++ provides two operators for dynamic memory allocation.
-> new - Allocates memory on the heap.
-> delete - Deallocates memory.
-> Memory that is allocated through new has to be released with delete.

SYNTAX OF new and delete
<type> *<variable> = new <type> (optional args);
delete <variable>;

int *p = new int(value);
delete p;
*/

#include <stdio.h>                             
#include <stdlib.h>
#include <iostream>

void Malloc(){
    int *p = (int *) malloc (10 * sizeof(int)); // Usage of malloc() to point to an array of 10 integers
    if (p == NULL){
        printf("Failed to allocate memory\n");
    }
    *p = 10;
    printf("%d\n",*p);
    // free(p);
    p = NULL;
    // free(p);
}

void New(){
    int *p = new int(7); // Initializes the memory which malloc() and calloc() cannot do.
    *p = 10;
    std::cout << *p << std::endl;
    delete p;
}

int main(){
    New();
    return 0;
}
