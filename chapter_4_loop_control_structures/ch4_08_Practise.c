// calculating factorial of a given number 

#include<stdio.h>

int main(){ 
    
    int num;
    int result=1;

    printf(" Enter the number whose factorial you want \n");
    scanf("%d",&num);
    for(int i=1;i<=num;i++){

         result *=  i;
        
    }
    printf("%d",result);

    return 0;
}