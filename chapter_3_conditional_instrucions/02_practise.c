#include<stdio.h>

int main(){
    
     int che , phy , maths;
     float total ;
 
     printf("enter you phy marks \n");
     scanf("%d",&phy);
     printf("enter you che marks \n");
     scanf("%d",&che);
     printf("enter you maths marks \n");
     scanf("%d",&maths);

     total =  ((phy + maths + che)/600)*100;
     if (total <33||phy<33||che<33||maths<33){
         printf(" better luck next time \n");
     }
     else printf(" congragulation");
    return 0;
}