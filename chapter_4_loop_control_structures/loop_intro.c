#include<stdio.h>
// program to print the first even number in 100;

int main(){

    for(int i=0;i<=100;i++){

    int result = i%2;
    if (result == 0){
        printf("%d \n",i );
    }
    }

    return 0;
}