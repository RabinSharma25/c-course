#include<stdio.h>
#include<string.h>

int main(){
    
    char st1[] = "Robin ";
    char *st2 = "Sharma";
    strcat(st1,st2);
    printf ("My name is %s",st1);
   
    return 0;
}