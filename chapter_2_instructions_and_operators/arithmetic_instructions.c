#include<stdio.h>
#include<math.h>
int main(){

int a = 4;
int b = 8;
int c = a + b;  // valid 
 //  a +b = c;  // not valid

printf("The value of a + b is : %d\n",a + b);
printf("The value of a - b is : %d\n",a - b);
printf("The value of a / b is : %d\n",a / b);
printf("The value of a * b is : %d\n",a * b);
printf("The value of  4 to the power 2 is %f ",pow(4,2)); // pow is a function from  the math library which returns the power of the two arguments // this fuction return a double (float)
return 0;
    
    }