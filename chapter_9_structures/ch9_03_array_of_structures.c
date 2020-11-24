#include <stdio.h>
#include <string.h>
int main()
{

    struct employee
    {
        int code;
        float salary;
        char name[35];
    };
    struct employee facebook[100];
    facebook[0].code = 100;
    facebook[0].salary = 100.45;
    strcpy(facebook[0].name, "Robin");

    facebook[1].code = 10;
    facebook[1].salary = 1010.45;
    strcpy(facebook[1].name, "Rohan");
    printf("Done");
    return 0;
}
