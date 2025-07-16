#include<stdio.h>
#define PI= 3.1416;
int main(){
float radius,height,surface ,volume;
    
    
    printf("Enter the radius of cylinder:");
    scanf("%f",&radius);
    printf("Enter the height of cylinder:");
    scanf("%f",&height);
    surface =2 * PI *radius * radius + 2 PI * radius * height;
    volume=PI * radius * radius * height;

   printf("Surface area of Cylinder= %.2f\n",surface );
   printf("volume of Cylinder= %.2f\n",volume);
   return 0;
}

