// write a program to print first n natural number using do-while loop 

// input -- 4
 /* 
 output --  1
            2
            3
            4
 */
 
#include<stdio.h>

int main(){
   int i = 1; 
   int input;

   printf("Enter the natural number \n");
   scanf("%d",&input);
   do{printf("%d\n",i);
   i++;
   }while(i<=input);
    return 0;
}