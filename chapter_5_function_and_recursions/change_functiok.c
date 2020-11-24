#include<stdio.h>
void change(int a); /// function prototype
int main(){
   
int b = 22;
printf("The value of b before using change function is %d\n",b);
change(b);
printf("The value of b afert using change function is %d\n",b);
   
    return 0;
}
 

 void change(int a){ // actual function 

     a = 77;
 }