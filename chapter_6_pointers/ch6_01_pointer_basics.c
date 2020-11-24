#include<stdio.h>
int main(){
  
  int a =4; // a normal int varible 
  int *f ;  // pointer variable to store the address or a ;;; in other words f points a ;
  f = &a; // storing the address of a int the pointer variable a f ;
  printf("%u\n",f); // printing the address of a ;
  printf("%u",*f); // printing the value  of a in stroed in its address  by dereferencing the f variable ;
    return 0;
}