#include<stdio.h>
int main(){


    int input;
    printf("Enter the integer \n");
    scanf("%d",&input);

    for(input;input>0;input--){

        printf("The number is %d\n",input);
    }

    return 0;
}