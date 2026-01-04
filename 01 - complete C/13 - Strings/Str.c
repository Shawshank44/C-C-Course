#include<stdio.h>
#include<string.h>

int main(){

    // String is a null terminated char array.

    // painful way of storing a string
    char name[] = {'s','h','a','s','h','a','n','k','\0'};
    int charsize = sizeof(name) / sizeof(name[0]);
    // for (int i = 0; i < charsize; i++)
    // {
    //     printf("%c ", name[i]);
    // }

    // easy way storing a string:
    char Myname[] = "shashank.BR";
    // printf("My name is %s \n",Myname);

    char chr[100];
    // printf("Please enter any words : ");
    // scanf("%s",&chr);
    // gets(chr); // in this function no need pass the format specifier and address of char
    // printf("The Words that you have entered is %s",chr);
    // puts(chr); // another way to to print the String.

    // String Functions :
    char str1[] = "aello";
    char str2[] = "World";
    char str3[100];

    // 1.strcat() : the function is used to concatenate or combine two given string
    // printf("%s \n",strcat(str1,str2));

    // 2.strlen() : The function is used know the length of the string.
    // printf("%d \n",strlen(str1));

    // 3.strrev() : this will reverse the string :
    // printf("%s", strrev(str1));

    // 4.strcpy() : This is used to copy one string into another.
    // strcpy(str3,str1);
    // printf("the strcpy copied %s", str3);

    // 5.strcmp(): This will compare two strings and will return the asci value.
    // printf("%d", strcmp(str1,str2));


    return 0;
}