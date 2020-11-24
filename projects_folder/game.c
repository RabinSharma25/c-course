#include<stdio.h>
#include<stdlib.h> // for generating random numbers 
#include<time.h>   // for some time calculation

int main(){
  
  int number;
  int guess;
  int guess_count =0;
  srand(time(0));
  number = rand()%100 + 1; // will generate a number between 1 and 100;
  //printf("The number is %d",number);

  // keep running the loop until the number is guessed ;;;;
  do{

    printf("guess the number between 1 and 100\n");
    scanf("%d",&guess);
    if(guess<number){
    
    printf("Enter a greater number  please ! \n");
    }
    else if (guess>number){
        printf("Enter a lower number please !\n");
    }
     guess_count++;

  } while(guess != number );
    
printf(" You compeleted  the game in %d attempts",guess_count);
    return 0;
}