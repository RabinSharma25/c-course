#include <stdio.h>
int main()
{

    char str[10] = { 'R','O','B','I','N','\0'};
    // alternatively we can make the string as follows
    //char str[] = "ROBIN";
    char *ptr ;
    ptr = &str[0];
    while (*ptr != '\0')
        ;
    {
        printf("%c", *ptr);
        ptr++;
    }
    return 0;
}