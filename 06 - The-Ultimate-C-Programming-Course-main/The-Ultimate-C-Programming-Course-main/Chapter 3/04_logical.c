#include <stdio.h>

int main(){
    // int a=1; int b=1;
    // printf("The value of a and b is %d\n", a&&b);
    // printf("The value of a or b is %d\n", a||b);
    // printf("The value of not(a) is %d\n", !a);

    // if(a && b){
    //     printf("both are true\n");
    // }
    // // is same as writing ....
    // if(a){
    //     if(b){
    //         printf("both are true");
    //     }
    // }

    int age;
    int exp;

    printf("Enter your age :");
    scanf("%d",&age);
    printf("Enter your experience :");
    scanf("%d",&exp);

    if (age >=18 && exp >= 5)
    {
        printf("then you can drive vehicles");
    }if (age >=18 || exp >=2)
    {
       printf("then you can drive cycle");
    }else{
        printf("sorry you are not eligible");
    }
    

    


    return 0;
}