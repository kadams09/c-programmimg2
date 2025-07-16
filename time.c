#include<stdio.h>
int main()
{
    int h,m,s;
    printf("Enter Hours");
    scanf("%d",&h);
    printf("Enter Minutes");
    scanf("%d",&m);
    printf("Enter Seconds");
    scanf("%d",&s);

    if(h>=0 && h<24)
    {
    if(s>=0 && s<60)
    printf("Time is valid");
    else
        printf("Seconds is Invalid");
    }
    else
         printf("Hours is Invalid");
         return 0;
}





  
