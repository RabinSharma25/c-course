#include<stdio.h>
int main(){
     char cha;
    printf ("Enter the character \n");
    scanf("%c",&cha);
    if(cha>=97 && cha<=122) printf("The letter is lower case\n"); // the are the decimal values of lower case letters 
    // a -->97 --- z-->122
     else printf("It is not lower case letter ");

    return 0;
}