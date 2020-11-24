#include<stdio.h>
int main (){
    
     int i = 4; // 4 bytes allocated to this variable 
     //const uint8_t btn_pin = 2;
     int *ptr = &i;
     printf("The address of i is %u\n",ptr);
     ptr++;
     printf("the value of ptr++ is  %u\n",ptr); // it would increment by 4 as this is the least  value allocated to my int variable in my computer architectue ;;;

      //////////////////////////////////////////// 

      
     int array[2]={3,4};
     int *ptr1 = &array[0];
     int *ptr2 = &array[1];
     printf("%u\n",ptr1);
     printf("%u\n",ptr2);
     printf("%u\n",ptr1>ptr2); // comparision of two pointer is possible ..
     //printf("%u",ptr1+ptr2);  // operation between two pointer is not always possible -- addition is not possible and subtraction is possible ............


    return  0;
}