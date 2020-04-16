#include <stdio.h>
int main()
{
    char upper,lower;

    printf("Enter your uppercase latter : ");
    scanf("%c",&upper);

    lower = tolower(upper);

    printf("Your lowercase latter is : %c",lower);

    getch();
    return 0;
}
