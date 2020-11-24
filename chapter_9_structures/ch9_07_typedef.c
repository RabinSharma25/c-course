#include<stdio.h>
#include<string.h>

   typedef struct employee {

       int code;
       float salary;
       char name[34];
   }emp; 

int main(){
   

  
    
   // struct employee e1;// before using typedef
   // struct employee *ptr; //before using typdef

   ////  after using typedef /////

   emp e1;
   emp *ptr;

//////////////////////////////////
    ptr = &e1;
    ptr->code = 100;
    ptr->salary = 122.3;
    strcpy(ptr->name,"Robin");

    printf("The code of the employee is :%d\n",e1.code);
    printf("The salary of the employee is :%f\n",e1.salary);
    printf("The name of the employee is :%s\n",e1.name);
  
    // alternatively;; 
    // ptr->code = 101;


    return 0;
}