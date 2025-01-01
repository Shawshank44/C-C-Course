#include<stdio.h> 

typedef struct{
    int emp_id;
    char name[20];
    int age;
    char gender[10];
}Employee;



int main(){

    int n;
    

    printf("Enter the Number of employees : ");
    scanf("%d", &n);

    Employee Emp[n];

     for (int i = 0; i < n; i++)
     {
        printf("enter %d employees \n",i+1);

        printf("Enter the Employee id : ");
        scanf("%d", &Emp[i].emp_id);

        printf("Enter the name : ");
        scanf("%s", &Emp[i].name);

        printf("Enter the age : ");
        scanf("%d", &Emp[i].age);

        printf("Enter the gender : ");
        scanf("%s", &Emp[i].gender);

        printf("\n");
     }
     
     for (int i = 0; i < n; i++)
     {
        printf("employees %d:\n", i + 1);
        printf("employee's id: %d\n", Emp[i].emp_id);
        printf("Name: %s\n", Emp[i].name);
        printf("Age: %d\n", Emp[i].age);
        printf("Gender %s", Emp[i].gender);
     }
     


 
    return 0;
}