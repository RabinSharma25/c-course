#include<stdio.h>

float average (int a,int b,int c);
int main(){
    printf("%f",(average (3,3,3)));

    return 0;
}
float average(int a,int b, int c){
  
  float av = (float)(a+b+c)/3;
  return av;

}