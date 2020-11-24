#include<stdio.h>

typedef struct complex{

    int real ;
    int imag;
}comp;
int main(){
  comp c1;
  c1.real = 34;
  c1.imag = 4;
  printf("The real part  of the complex no is %d\n",c1.real);  
  printf("The imaginary  part  of the complex no is %d\n",c1.imag);  


    return 0;
}