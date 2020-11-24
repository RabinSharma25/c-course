// program that swaps two variables 

#include<stdio.h>
void wrong_swap(int a, int b);
void swap(int *a, int *b);
int main(){

    int x=3;
    int  y =4;
    printf("The value of x and y is %d and %d\n",x,y);
    wrong_swap(x,y); // but this will not swap the two variables 
    printf("The value of x and y is %d and %d\n",x,y);


    printf("The value of x and y is %d and %d\n",x,y);
    swap(&x,&y); // this will  swap the two variables 
    printf("The value of x and y is %d and %d\n",x,y);

  
    
    return 0;
}
void wrong_swap(int a,int b){
    int temp;
    temp = a;
    a = b;
    b = temp;


}

void swap(int *a,int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;


}