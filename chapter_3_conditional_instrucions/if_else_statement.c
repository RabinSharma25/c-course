#include<stdio.h>
int main(){
    int age;

    printf("please enter your age \n");
    scanf("%d",&age);
    if(age>=90 || age<=18){

        printf(" sorry you cannot drive \n");
    }
    else
    { printf("you can drive \n");
    
    }

    return 0;
}