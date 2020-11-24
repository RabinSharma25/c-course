#include<stdio.h>
int main()
{
int a,b;
printf("Enter the value of a \n");
scanf("%d", &a); // takes the value from the user and stores it in variable a %d as the entered value will be an integer  ,&a means address of a and %d, %c,%f are format specifier...
printf("The value of a is %d",a);

    return 0;  
}