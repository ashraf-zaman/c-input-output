#include <stdio.h>
int main()
{
    char lower, upper;

    printf("Enter your lowercase latter : ");
    scanf("%c", &lower);

    upper = toupper(lower);

    printf("Uppercase later is : %c", upper);

    getch();
    return 0;
}
