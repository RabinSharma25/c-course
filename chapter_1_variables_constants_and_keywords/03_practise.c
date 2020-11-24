// program to convert celcius to fehrenheit

#include<stdio.h>
int main(){
float cel_temp ;
printf("Enter the temperature in celcius \n");
scanf("%f",&cel_temp);
float fer_temp= (cel_temp*9/5) + 32;
printf("The value fehrenheit is %f", fer_temp);
return 0;
}