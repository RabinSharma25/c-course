#include<stdio.h>
#include<string.h>

   struct employee {

       int code;
       float salary;
       char name[34];
   }; 

int main(){
   

  
    
    struct employee e1;
    struct employee *ptr;

    ptr = &e1;
    (*ptr).code = 101;
    // alternatively;; 
    // ptr->code = 101;
    printf("%d\n",e1.code);
    (*ptr).salary = 29.3;
    printf("%f\n",e1.salary);
   // (*ptr).name = "robin";
    //printf("%s",e1.name);

    return 0;
}