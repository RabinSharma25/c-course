#include<stdio.h>

int main(){
    int num;
    printf("Enter your number \n");
    scanf("%d",&num);

    if (num == 1){

        printf(" your number is one \n");
    }
    
    else if (num == 2 ){

        printf("your number is two \n");
    }
    
    else printf("Invalid number ");
    return 0;
}