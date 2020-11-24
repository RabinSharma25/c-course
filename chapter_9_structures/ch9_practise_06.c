#include<stdio.h>

typedef struct complex{

    int real ;
    int imag;
}comp;

void display(comp c ){
   
   printf("The value of the real part is %d\n",c.real);
   printf("The value of the imaginary part is %d\n",c.imag);
   printf(" \n");
 
}
int main(){
  comp coms[5];
  for (int i=0;i<5;i++){
     
     printf("Enter the real value for %d num \n ",i+1);
     scanf("%d",&coms[i].real);

     printf("Enter the real value for %d num \n ",i+1);
     scanf("%d",&coms[i].imag);
  }
  for (int j = 0;j<5;j++){

      display(coms[j]);
  }

    return 0;
}