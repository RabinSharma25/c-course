#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int decisionMaker(char comp, char you){

    if(you == 'g' && comp =='s')printf("you won\n");
    else if(you == 's' && comp == 'w')printf("you won\n");
    else if(you == 'w' && comp == 'g')printf("you won\n"); 
    else if(you == comp) printf("The match went draw\n");
    else printf("you loose ):");
}
int main(){
    int number;
    char computer;
    char me;
    srand(time(0));
    number = rand()%100 +1; // gerenreates a random number ;;
    if(number <=34)  computer ='s';
    else if(number >34&& number <=66) computer = 'g';
    else computer = 'w'; 
    printf("Enter 'w' for water , 's' for snake and 'g' for gun \n");
    printf("please play your turn \n");
    scanf("%c",&me);
    printf("Computer choose %c and you choose %c so\n ",computer,me);
    int j;
 
    decisionMaker(computer,me);
    

    
    return 0;
}