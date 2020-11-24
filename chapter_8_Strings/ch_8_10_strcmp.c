#include<stdio.h>
#include<string.h>

int main(){
    
    char st1[] = "Robin  ";
    char *st2 = "Sharma";
    int val = strcmp(st1,st2);
    printf ("The value is  %d",val);
   
    return 0;
}