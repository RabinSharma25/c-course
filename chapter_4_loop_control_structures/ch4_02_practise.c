// write a  program to print  multiplication table in reverse ordrer ''

#include<stdio.h>
 
 

int main(){
  int input;
printf(" Enter the number whose multiplication table you want\n ");
scanf("%d",&input);
for (int i=10;i>0;i--){
    int result = input*i;

    printf("%d",input); printf(" x %d",i);printf(" = %d\n",result);
    // also printf(" 10 x %d = %d\n",i,10*i);
}
    return 0;
}