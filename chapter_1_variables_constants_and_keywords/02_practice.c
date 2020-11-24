// calculation of area of circle
#include<stdio.h>
int main(){
    float radius;
    float height;


    printf( "Enter the radius of the cylinder \n");
    scanf("%f",&radius);
    printf( "Enter the height of the cylinder \n");
    scanf("%f",&height);
    float volume = 3.14*radius*radius*height;
    printf("The volume of cylinder is %f",volume);
    return 0;
}