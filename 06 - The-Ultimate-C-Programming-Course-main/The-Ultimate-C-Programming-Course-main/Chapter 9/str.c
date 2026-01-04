#include <stdio.h>
#include <string.h>

int main() {
    char src[] = "Hello, World!";
    char dest[50];

    strcpy(dest, src);

    printf("Source: %s\n", src);
    printf("Destination: %s\n", dest);

    return 0;
}