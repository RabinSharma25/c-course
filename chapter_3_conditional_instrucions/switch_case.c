#include<stdio.h>
int main(){
   int rating ;

   printf(" Enter your rating \n");
   scanf("%d",&rating);

   switch(rating){
       case 1:
       printf("your rating is one\n ");
       break;
       case 2:
       printf("your rating is two \n");
       break;
       case 3:
       printf("your rating is three \n");
       break;
       case 4 :
       printf("your rating is four \n ");
       break;
       case 5:
       printf("yout rating is five \n");
       break;
       default:
       printf("invalid rating");
       break;
   }
    return 0;
}