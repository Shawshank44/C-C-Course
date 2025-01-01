#include<stdio.h>
#include<stdlib.h> // library for dynamic memory allocation.

/*
Memory assigned to program in a typical architecture can be broken down into four segments.
1. code (Text segments)
2. static/ global variables - splits
    i) Data segments(Initiazed storage)
    ii) BSS segments(Uninitialized segment) - block started segement(BSS)
3. Stack - list of all storage - LIFO(last in first out)
4. Heap - dynamic memory 
*/

int main(){

    //1. malloc (Memory Allocation) :
    /*
        Syntax: void* malloc(size_t size);
        Allocates a block of memory of the specified size (in bytes).
        Returns a pointer to the beginning of the block of memory. If the allocation fails, it returns NULL.
        The memory allocated is uninitialized (contains garbage values).
    */

    // int *ptr;
    // int n;
    // printf("Enter the number of elements you want to store in an array : ");
    // scanf("%d",&n);
    // ptr = (int*)malloc(n* sizeof(int));
    // for (int i = 0; i < n; i++)
    // {
    //     printf("Enter the value no %d of this array \n", i);
    //     scanf("%d",&ptr[i]);
    // }

    // for (int i = 0; i < n; i++)
    // {
    //     printf("Enter the value no %d of this array is %d \n", i, ptr[i]);
    // }
    
    

    //2. calloc (Contiguous Allocation) :
    /*
        Syntax: void* calloc(size_t num, size_t size);
        Allocates memory for an array of num elements, each of them size bytes long.
        Initializes all bytes to zero.
        Returns a pointer to the allocated memory. If the allocation fails, it returns NULL.
    */

    int *ptr;
    int n;
    printf("Enter the number of elements you want to store in an array : ");
    scanf("%d",&n);
    ptr = (int*)calloc(n,sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("Enter the value no %d of this array \n", i);
        scanf("%d",&ptr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        printf("Enter the value no %d of this array is %d \n", i, ptr[i]);
    }


    //3. realloc (Reallocation):
    /*
        Syntax: void* realloc(void* ptr, size_t size);
        Resizes the memory block pointed to by ptr to size bytes.
        If ptr is NULL, it acts like malloc.
        If the new size is larger, the contents of the previous memory block are copied to the new block, and the extra memory is uninitialized.
        If the new size is smaller, the block is truncated.
        Returns a pointer to the newly allocated memory, or NULL if the reallocation fails.
    */

    printf("Enter the number of elements you want to store in an new array : ");
    scanf("%d",&n);
    ptr = (int*)realloc(ptr, n*sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("Enter the value no %d of this array \n", i);
        scanf("%d",&ptr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        printf("Enter the value no %d of this array is %d \n", i, ptr[i]);
    }


    //4. free (Free Memory) :
    /*
        Syntax: void free(void* ptr);
        Deallocates the memory previously allocated by malloc, calloc, or realloc.
        After free is called, the pointer is no longer valid and should not be used.
    */
   free(ptr);
   printf("Memory freed");

     
    return 0;
}