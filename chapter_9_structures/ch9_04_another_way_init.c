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
    struct employee Robin = {10,399.3,"Robin"};
    printf("%d\n",Robin.code);
    printf("%f\n",Robin.salary);
    printf("%s\n",Robin.name);

    return 0;
}
