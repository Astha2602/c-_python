#include<stdio.h>
#include<string.h>
int main()
{
    char str1[100]="this is",str2[]="c session";
    strcat(str1,str2);
    puts(str1);
    puts(str2);
    return 0;
}