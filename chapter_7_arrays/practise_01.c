#include<stdio.h>
int main(){
    
    int array [10] = { 2,3,4,43,5,54,34,33,23,21};
    int *ptr;
    ptr = &array[0];
    printf("The value of array [0] is %u\n",*ptr);
   // ptr++;
    printf("The value of array [1] is %u",++*ptr);
    return 0;
}