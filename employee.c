#include <stdio.h>
#include <stdlib.h>
 
typedef struct{
 
    char name[30];
    int age;
    int phn_no;
    int salary;
 
} Employee;
 
int main()
{
    int i, n=2;
 
    Employee employees[n];
 
    //Taking each employee detail as input
 
    printf("Enter %d Employee Details \n \n",n);
    for(i=0; i<n; i++){
 
        printf("Employee %d:- \n",i+1);
        //Name
        printf("Name: ");
        scanf("%s",employees[i].name);
        //age
        printf("age: ");
        scanf("%d",&employees[i].age);
        //phone number
        printf("phn_no: ");
        scanf("%s",&employees[i].phn_no);
        //Salary
        printf("Salary: ");
        scanf("%d",&employees[i].salary);
 
        printf("\n");
    }
    //Display employee details
    printf("-------------- All Employees Details ---------------\n");
 
    for(i=0; i<n; i++)
    {
        printf("\nName\t\tage\t\tphn_no\t\tsalary\n");
        printf("%s\t\t%d\t\t%d\t%d\n",employees[i].name,employees[i].age,employees[i].phn_no,employees[i].salary);
}
    return 0;

} 
