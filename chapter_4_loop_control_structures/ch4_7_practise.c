// write a  program to print  multiplication table of a number and get the sum of the table

#include<stdio.h>
 
 

int main(){
  int input;
  int sum=0;
printf(" Enter the number whose multiplication table you want\n ");
scanf("%d",&input);
for (int i=1;i<=10;i++){
    int result = input*i;

    printf("%d",input); printf(" x %d",i);printf(" = %d\n",result);
    sum = sum + result;
   /// printf("dd");
   if(i==10){
    printf("%d\n",sum);
    }
    // also printf(" 10 x %d = %d\n",i,10*i);
}
    return 0;
}


