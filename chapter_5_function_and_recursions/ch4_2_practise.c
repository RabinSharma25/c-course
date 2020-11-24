// write a program to convert celcius temp to fehreheit temp 
#include<stdio.h>
float temp(float cel_temp);
int main(){
   // formula --> celcius * 9/5 + 32;
   float cel;
   printf("Enter the  temp in celcius \n");
   scanf("%f",&cel);
  printf("the temp in fehrenheit is %f",temp(cel));
   
    return  0;

}
float temp(float cel_temp){
    float fer = cel_temp*9/5 +  32;
    return fer;

}
