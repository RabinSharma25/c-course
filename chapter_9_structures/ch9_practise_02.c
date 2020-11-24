#include<stdio.h>

typedef struct vector{
    int x;
    int y;
} vect;

int sumVector(int a,int b){
    int c = a +b;
    return c;


}
int main(){
    // struct vector v1;
   vect v1;
   v1.x = 3;
   v1.y = 4;

   printf("The x and y dimensions of vector v1 are %d  and %d \n",v1.x,v1.y);
   printf("%d",sumVector(v1.x,v1.y));
   

    return 0;
}