#include<stdio.h>
#include<string.h>

   struct employee {

       int code;
       float salary;
       char name[34];
   }; 
   void show (struct employee emp){
   
   printf("The code of the employee is %d\n",emp.code);
   printf("The salary of the employee is %f\n",emp.salary);
   printf("The name of the employee is %s\n",emp.name);

   }

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
    strcpy(ptr->name , "Robin");
   // (*ptr).name = "robin";
    //printf("%s",e1.name);
    show(e1);

    return 0;
}