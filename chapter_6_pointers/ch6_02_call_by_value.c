// call by value 
#include<stdio.h>
int sum(int a , int b);

int main(){
    
    int x = 4,y = 7;
    printf("The value of x and y is %d and %d\n",x,y);
    printf("The value of 4+7 is %d\n",sum(x,y));
    printf("The value of x and y after function call is %d and %d\n",x,y);
    return 0;
}
int sum( int a , int b){

    int c;
    c = a+b;
    b = 3354;
    c = 334; 
}
// from this function we are clear that the if we edit the variable passed inside a function the actual variables remains unchanged /.//  like we set a and b to different valued but the actual values remained unchanged...