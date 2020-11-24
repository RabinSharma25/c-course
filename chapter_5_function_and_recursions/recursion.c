#include<stdio.h>
   
   int factorial( int a);
int main(){
  int a = 3;
  printf( "The value of factorial %d is %d",a,factorial(a));

   return 0;
}
int factorial(int x){

    if(x==1||x==0){  // base condition 
        return 1;
    }
    else{
        return x*factorial(x-1);
}  
/* 
// how the function got executed 
 // 3*fac(2)
 //3*2*fac(1)
  //3*2*1*/

    }                           