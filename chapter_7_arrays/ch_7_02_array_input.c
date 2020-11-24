#include<stdio.h>
int main(){
   
   int marks[4];
   printf("Enter the vlaue of marks for student 1\n");
   scanf("%d",&marks[0]);
   printf("Enter the vlaue of marks for student 2\n");
   scanf("%d",&marks[1]);
   printf("Enter the vlaue of marks for student 3\n");
   scanf("%d",&marks[2]);
   printf("Enter the vlaue of marks for student 4\n");
   scanf("%d",&marks[3]);
   //printf("%d%d%d%d",marks[0]," ",marks[1]," ",marks[2]," ",marks[3]);
   printf("%d,%d,%d,%d",marks[0] ,marks[1],marks[2],marks[3]);
    
    return 0;
}