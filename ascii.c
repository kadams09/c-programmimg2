#include<stdio.h>
int main()
{
    char ch;
    printf("Enter Anaything ");
    scanf("%c",&ch);
    if(ch>=65 && ch <=90)
    printf("Capital Letter");
    else if (ch>=97 &&ch <=122)
    printf("Small Letters");
    else if (ch>=48 && ch<=57)
    printf("Digits");
    else
    printf("special Symbol");
    return 0;
}