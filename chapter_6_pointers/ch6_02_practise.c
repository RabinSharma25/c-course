// Write a program having a variable i . Print the address of i .Pass this variable to a function and print its address . Are these addreses same? Why?

#include<stdio.h>
int test ( int x);

int main(){
    
    int a  = 13;
    printf("The address of a is %u\n",&a);
    test(a);
    return 0;
}
int test(int x){

    printf( "The address of the parameter is %u",&x);
}
// As we saw the addresses are not the same as these two variables are now allocated to different memory location or memory blocks................