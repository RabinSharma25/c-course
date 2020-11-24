#include<stdio.h>
int main(){
    

    printf("Enter the natural number till which you want its sum \n");
    int num;
    scanf("%d",&num);

     int sum = num/2 * (num+1);
     printf("%d",sum);
    return 0;
}