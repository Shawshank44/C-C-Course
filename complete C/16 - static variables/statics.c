#include <stdio.h>
#include <string.h>

/*
Static variables in C have a unique property that differentiates them from regular variables:
they retain their value between function calls. This is achieved by storing them in a different memory area,
usually the data segment, as opposed to the stack for automatic variables.
*/

// local static variable:
void LocalVar()
{
    static int LocalCounter = 0;
    LocalCounter++;
    printf("Local Count: %d \n", LocalCounter);
}

static int GlobalCounter = 0;

void GlobalVar(){
    GlobalCounter++;
    printf("Global Count: %d\n", GlobalCounter);
}

int main()
{
    LocalVar();
    LocalVar();
    GlobalVar();
    GlobalVar();

    return 0;
}