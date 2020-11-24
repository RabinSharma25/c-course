//Q.1
/* which of the following is valid in c ?
1.int a ;b=a;
2.int v=3^3;
3.char dt = '21 dec 220'

*/

// Q.2 write a program to check whether a number is divisible by 97 or not..
#include<stdio.h>
int main (){

int num;
printf(" Enter the integer whose divisibility you want to check with 97 \n");
scanf("%d", &num);
printf("dividing the enterd integer by 97 returns the remainder  %d \n",num%97);

//Q.3 step by step evaluate 3x/y - z+k +34
int x =2,y=3,z=3,k=1;
int result = 3*x/y-z+k+34;
// 6/3 - 3+1+34
// 2-3+1+34
// -1+1+34
// 34
// thus the result will print 34
printf("the value of result is %d",result);


    return 0;
}