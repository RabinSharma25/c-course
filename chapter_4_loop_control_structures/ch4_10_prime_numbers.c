#include<stdio.h>
int main(){
  

printf("Enter the number which you want  to check whether it  is prime or composite\n");
int num;
int flag;
scanf("%d",&num);
for(int i=2;i<num;i++){

    if(num%i == 0){
        flag=1;
        
        break;
    }
    else{
        
       continue;
    }
}
if(flag ==1){

    printf("The entered number is not prime\n");
}
else printf("The entered number is prime \n");

    return 0;
}