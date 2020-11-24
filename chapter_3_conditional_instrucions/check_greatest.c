#include<stdio.h>
int main(){

    int first,second,third,forth;
    printf("Enter the first number \n");
    scanf("%d",&first);
    printf("Enter the second number \n");
    scanf("%d",&second);
    printf("Enter the third number \n");
    scanf("%d",&third );
    printf("Enter the forth number \n");
    scanf("%d",&forth);


    if (first ==second || second == third|| third== forth||first == forth||forth == second){
        printf("please enter different numbers ");
    }
    else if  (first>second &&first >third && first>forth)printf("The greatest number is %d",first);
     else if (second>first&&second>third&&second>forth)printf("The greatest number is %d",second);
     else if (third>first&&third>second&&third>forth)printf("The greatest number is %d",third);
     else printf("The greatest number is %d",forth);


    return 0;
}