#include<stdio.h>
#include<stdlib.h>

int main(){

    // predefined macros
    printf("File name is : %s\n",__FILE__); // to now the file name
    printf("today's date is : %s\n",__DATE__); // we can know the date
    printf("Currect time is : %s\n",__TIME__);// we can know the current time
    printf("The line Number is : %d\n",__LINE__);// we  can know the current line number
    printf("ANSI is : %d\n",__STDC__); // we can know the standard
     
    return 0;
}