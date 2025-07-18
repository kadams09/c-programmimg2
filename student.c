#include<stdio.h>
int main()
{
    int  roll;
    char name[100],sub1[100],sub2[100],sub3[100];
    float m1,m2,m3,total,avg;
    char grade;

    printf("Enter a student details:");
    printf("\nRoll Number:");
    scanf("%d",&roll);
    printf("Name:");
    scanf("%s",&name);
    printf("Subject1 :");
    scanf("%s",&sub1);
    printf("Subject 2:");
    scanf("%s",&sub2);
    printf("Subject 3:");
    scanf("%s",&sub3);
    printf("Marks of Subject 1:");
    scanf("%f",&m1);
    printf("Marks of Subject 2:");
    scanf("%f",&m2);
    printf("Marks of Subject 3:");
    scanf("%f",&m3);

    total=m1+m2+m3;
    avg=total/3;

    if(avg<= 100 && avg>=90)
    grade = '0';
    else if (avg <= 90 && avg >=80)
    grade = 'A';
    else if (avg <= 80 && avg >=70)
    grade = 'B';
    else if (avg <= 70 && avg >=60)
    grade = 'C';
    else if (avg <= 60 && avg >=50)
    grade = 'D';
    else if (avg <= 50 && avg >=35)
    grade = 'E';
    else
    grade = 'F';

    printf("\n---------------Result-------------");
    printf("\n Roll Number         :%d",roll);
    printf("\n  Name               :%s",name);
    printf("\n Subject 1           :%s",sub1);
    printf("\n Marks of suject 1   :%f",m1);
    printf("\nSubject 2            :%s",sub2);
    printf("\nMarks od subject 2   :%f",m2 );
    printf("\n,Subject 3           :%s",sub3);
    printf("\nMarks of subject 3   :%f",m3);
    printf("\nTotal                :%f",total);
    printf("\nAvg                  :%f",avg);
    printf("\nGrade                :%c",grade);
    

}