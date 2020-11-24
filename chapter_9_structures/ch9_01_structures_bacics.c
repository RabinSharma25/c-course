#include<stdio.h>
#include<string.h>

int main(){
    

    struct employee{
        char name[19];
        int id;
        char gender;

    };

    struct employee ep1;
    ep1.id = 100;
    ep1.gender ="f";
    strcpy(ep1.name,"Robin");
    
    struct employee ep2;
    ep2.id = 101;
    ep2.gender = "m";
    strcpy(ep2.name,"Sabiya");

    struct employee ep3;
    ep3.id = 102;
    ep3.gender = "f";
    strcpy(ep3.name,"Rohan");

    // can be also done as struct employee ep1,ep2,ep3;

    
    return 0;
}