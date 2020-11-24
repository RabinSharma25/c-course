#include<stdio.h>
int main(){
   
   int num ;
   printf("Enter the number whose multiplication table you want \n");
   scanf("%d",&num);
   int j=1;
   int multi [10];
   for (int i=0;i<10;i++){
       
  
  multi[i] = num*j;
  j++;
   }
   for (int i=0;i<10;i++){

       printf("The value of multi %d is %d \n:",i,multi[i]);
   }
    return 0;
}