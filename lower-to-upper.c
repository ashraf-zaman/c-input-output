#include<stdio.h>
int main()
{
    char lower;

    printf("Enter any Lowercase Latter : ");
    scanf("%c",&lower);
    printf("Your Uppercase Latter is : %c",lower-32);

    getch();
    return 0;
}
