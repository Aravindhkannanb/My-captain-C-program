// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>
 
typedef struct{
    char name[30];
    int age;
    int phonenumber;
    int Salary;
    
} Employee;
 
int main()
{
    //number of employees
    int n=20;

    //array to store structure values of all employees
    Employee employees[n];
 
    //Taking each employee detail as input
    printf("Enter %d Employee Details \n ",n);
    for(int i=0; i<n; i++){
        printf("Employee %d:- \n",i+1);

        //Name
        printf("Name: ");
        scanf("%[^\n]s",employees[i].name);


        printf("Age: ");
        scanf("%d",&employees[i].age);

        
        printf("PhoneNumber: ");
        scanf("%d",&employees[i].phonenumber);
        
        printf("Salary : ");
        scanf("%d",&employees[i].Salary);
        
        
        //to consume extra '\n' input
        char ch = getchar();
 
        printf("\n");
    }
 
    //Displaying Employee details
    printf("-------------- All Employees Details ---------------\n");
    printf("Name , Age , Phonenumber , Salary :");
    for(int i=0; i<n; i++){
       printf(" %s,%d,%d,%d  ",employees[i].name,employees[i].age,employees[i].phonenumber,employees[i].Salary);
       
        
        printf("\n");
        
    }
 
    return 0;
}