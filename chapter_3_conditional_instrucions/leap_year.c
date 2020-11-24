#include<stdio.h>

int main(){
    int year;
    
    printf("please enter the year\n");
    scanf("%d",&year);
    if(year%4 == 0){
       int check1 = year%100; // dividing by 100
       if(check1 ==0){ ///
int check2 = year%400;
       if (check2 == 0) {
           printf("The year is a leap year ;");
       }
       else printf("The year is not a leap year \n");
       }
       else printf("The year is a leap year \n");
    }
    else printf("The year is not a leap year \n");
    return 0;
}