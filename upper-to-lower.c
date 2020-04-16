#include<stdio.h>
int main()
{
    char lower;

    printf("Enter any Uppercase Latter : ");
    scanf("%c",&lower);

    printf("Your Lowercase Latter is : %c",lower+32);

    getch();
    return 0;
}

