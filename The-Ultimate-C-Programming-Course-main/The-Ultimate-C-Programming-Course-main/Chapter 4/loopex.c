#include <stdio.h>
#include <string.h>

int main(){
    char name[50];
    int age;
    char gender[50];
    char input[10];
    

    while (1)
    {
        printf("enter the name (or type exit) :");
        scanf("%s",&name);

        if (strcmp(name, "exit") ==  0)
        {
            break;
        }
        
        printf("enter your age : ");
        scanf("%d",&age);

        printf("enter the gender : ");
        scanf("%s", &gender);

        printf("\n User details \n");
        printf("Name : %s \n",name);
        printf("Age : %d \n",age);
        printf("Gender : %s \n",gender);
        printf("\n");


    }
    printf("exited");
    
    
    return 0;
}