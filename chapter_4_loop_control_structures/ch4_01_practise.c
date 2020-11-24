// Write a prorram to print the multplicatio table of a given number ;;
#include<stdio.h>
 
 

int main(){
  int input;
printf(" Enter the number whose multiplication table you want\n ");
scanf("%d",&input);
for (int i=1;i<=10;i++){
    int result = input*i;

    printf("%d",input); printf(" x %d",i);printf(" = %d\n",result);
}
    return 0;
}