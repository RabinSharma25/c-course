// write a function to calculate force of attraction on a body of mass m exerted by the earht gratvity ( g = 9.8)
#include<stdio.h>
float force (float mass);
int main(){
  
  float mass ;

  printf("Enter the mass of the body \n");
  scanf("%f",&mass);
  printf("The force exerted on this body of mass %f is %f\n",mass,force(mass));
  int a = 3;
  printf("%d,%d",a,a++);


    return 0; 
}
float force (float mass){

    float  result = mass * 9.8;
    return result;
}