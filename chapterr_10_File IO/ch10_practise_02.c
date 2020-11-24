#include<stdio.h>
int main(){

    FILE *fptr; 
    int number;
    printf("Enter the number whose multiplication table you want \n");
    scanf("%d",&number);

    fptr = fopen("generated.txt","w");

    for(int i=1;i<=10;i++){
    fprintf(fptr,"%d X %d = %d\n",number,i,(number*i));
    //fprintf(fptr,"Thanks for using fprintf\n");
    }
    fclose(fptr);
}