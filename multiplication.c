#include <stdio.h>
int main() 
{
double a, b, multiply;
printf("Enter two numbers: ");
scanf("%lf %lf", &a, &b);  
multiply = a * b;
printf("Product = %lf", multiply);
return 0;
}
