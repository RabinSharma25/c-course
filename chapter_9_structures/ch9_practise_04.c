#include<stdio.h>

typedef struct student{

    char name[23];
    int roll;
    int class;
}stu;
int main(){

    stu s1;
    stu *ptr;
    ptr = &s1;
    //(*ptr).roll = 34;
    ptr->roll = 34;
    printf("The roll no of student  s1 is :%d\n ",s1.roll);
    return 0;
}