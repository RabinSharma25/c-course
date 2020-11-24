#include<stdio.h>
int main(){

    FILE *fptr; 
    int number = 43;

    fptr = fopen("generated.txt","w");
    for(int i=0;i<188;i++){
    fprintf(fptr,"The number is %d\n",number);
    fprintf(fptr,"Thanks for using fprintf\n");
    }
    fclose(fptr);
}