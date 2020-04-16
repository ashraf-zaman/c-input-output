#include<stdio.h>
int main()
{
    int i;
    char c;
    float f;
    double d;

    printf("Enter a character for integer : ");
    scanf("%c",&i);
    fflush(stdin); // to clear output buffer

    printf("Enter a character for char : ");
    scanf("%c",&c);
    fflush(stdin);

    printf("Enter a character for float : ");
    scanf("%c",&f);
    fflush(stdin);

    printf("Enter a character for doable : ");
    scanf("%c",&d);
    fflush(stdin);

    printf("\nSize of Integer = %d bytes\n",sizeof(i));
    printf("Size of char = %d bytes\n",sizeof(c));
    printf("Size of float = %d bytes\n",sizeof(f));
    printf("Size of double = %d bytes\n\n",sizeof(d));

    //printf("Size of Integer = %d bytes\nSize of char = %d bytes\nSize of float = %d bytes\nSize of double = %d bytes\n",sizeof(int),sizeof(char),sizeof(float),sizeof(double));

    getch();
    return 0;
}
