#include<stdio.h>
int main(){
    
    int num1,num2,num3;
    FILE *ptr;
    ptr = fopen("practise.txt","r");
    fscanf(ptr,"%d",&num1);
    fscanf(ptr,"%d",&num2);
    fscanf(ptr,"%d",&num3);
    printf("The value of num1 is %d\n",num1);
    printf("The value of num2 is %d\n",num2);
    printf("The value of num3 is %d\n",num3);
    return 0;
}