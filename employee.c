#include <stdio.h>
int main() {

    char name[50];
    float id ,BS, DA, HRA ,Tax, TS;

    printf("Enter the Name of Employee employee ID : ");
    scanf("%f", &id);

    printf("Enter Employee Name: ");
    scanf("%s", &name);

    printf("Enter DA(%%) of the employee: ");
    scanf("%f", &DA);

    printf("Enter HRA(%%)of the employee:");
    scanf("%f", &HRA);

    printf("Enter the basic salary of the employee:");
    scanf("%f", &BS);
    if(BS>=100000)
    Tax=20;
    else if (BS>=800000)
    Tax=15;
    else if (BS>=50000)
    Tax=10;
    else if (BS>=30000)
    Tax=5;
    else
    Tax=0;
    printf("Enter Tax:%.2f%%\n",Tax);

    TS = BS+((BS*(DA+HRA-Tax))/100);
    printf("Total salary of the employee is %f",TS);
    return 0;
}







    