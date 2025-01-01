#include <stdio.h>

int main()
{
    char st[30];
    gets(st); // The entered string is stored in st! this is used for spaces 

    printf("%s", st);
    // puts(st);
    printf("hey");

    return 0;
}