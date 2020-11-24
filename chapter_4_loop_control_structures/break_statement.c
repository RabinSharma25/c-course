#include<stdio.h>
int main(){
  
    int i ;
    for(i=0;i<20;i++){
      if(i== 5){
          break;
      }

        printf("The value of i is %d\n",i);
    }
    return 0;
}