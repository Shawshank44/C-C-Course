#include<stdio.h> 
#include<stdlib.h>

/*
    File I/O (Input/Output) in C allows you to read from and write to files, 
    which is crucial for many programs that need to store or retrieve data. 
    Here's a basic guide to file I/O in C:

    "mode": The mode in which you want to open the file:
    "r": Open for reading. The file must exist.
    "w": Open for writing. Creates a new file or truncates an existing file.
    "a": Open for appending. Creates a new file if it doesn't exist.
    "r+": Open for both reading and writing. The file must exist.
    "w+": Open for both reading and writing. Creates a new file or truncates an existing file.
    "a+": Open for both reading and writing. Creates a new file if it doesn't exist.

    few well known functions are:
    fopen: Opens a file and returns a pointer to a FILE object
    fclose: Closes an opened file and flushes the output buffer
    freopen: Reopens an existing file stream with a different file or mode.
    fgetc: Reads a single character from a file.
    fgets: Reads a line (or a string) from a file until a newline or EOF is encountered
    fscanf: Reads formatted data from a file (similar to scanf).
    fputc: Writes a single character to a file.
    fputs: Writes a string to a file.
    fprintf: Writes formatted data to a file (similar to printf).

*/


int main(){
    FILE *ptr = NULL;
    char str[500];
    char str2[300] = "Hello_World_Good_Morning";

    //Reading a file :
    // ptr = fopen("test.txt","r");
    // fscanf(ptr,"%s",str);
    // printf("%s",str);

    //Writing a file :
    // ptr = fopen("test.txt","w");
    // fprintf(ptr,"%s",str2);

    // reading a character from the file:
    // ptr = fopen("test.txt","r");
    // char c = fgetc(ptr);
    // printf("The character I read was %c\n",c);

    // reading a string from file:
    // ptr = fopen("test.txt","r");
    // char s[50];
    // fgets(s,10,ptr);
    // printf("The String I read was %s\n",s);

    // Writing a character in file :
    // ptr = fopen("test.txt","w");
    // fputc('S',ptr);

    // Writing a String in file:
    // ptr =  fopen("test.txt","w");
    // fputs("This is writing a String",ptr);

    // Appending an file (adding new String to the file):
    // ptr = fopen("test.txt", "a");
    // fprintf(ptr, " This is a new line added to the file.\n");

    //Reading and write in file :
    // ptr = fopen("test.txt", "r+");
    // char buffer[100];
    // while (fgets(buffer, sizeof(buffer), ptr) != NULL) {
    //     printf("%s", buffer);
    // }
    // rewind(ptr); // Move the file pointer back to the beginning of the file

    // fprintf(ptr, "This is new content.\n");

    // Same as W+
    // ptr = fopen("test.txt", "w+");
    // fprintf(ptr, "This is the new content.\n");
    // rewind(ptr);
    // char buffer[100];
    // printf("File content after writing:\n");
    // while (fgets(buffer, sizeof(buffer), ptr) != NULL) {
    //     printf("%s", buffer);
    // }

    // Adding new data (Appending) and also reading the data.
    // ptr = fopen("test.txt", "a+");
    // rewind(ptr);
    // char buffer[100];
    // printf("Current file content:\n");
    // while (fgets(buffer, sizeof(buffer), ptr) != NULL) {
    //     printf("%s", buffer);
    // }

    // fprintf(ptr, "This is appended content.\n");


    fclose(ptr); // to close the file

    return 0;
}