#include <stdio.h>

int main()
{
    printf("C works\n");
    short num1 = 6, num2 = 7;
    printf("Num 1: %d\nNum 2: %d\n", num1, num2);
    fputs("fputs can also work as output!\n", stdout);

    // get age
    printf("Enter num1: ");
    scanf("%d", &num1);
    printf("Num 1: %d\n", num1);

    // get name
    char name[30];
    printf("Give first name: ");
    scanf("%s", &name);
    printf("Name: %s\n", name);

    // get char and int
    printf("Input char and int: ");
    scanf("%c", "%d", &name[0], &num2);
    printf("Char: %c\n", name[0]);
    printf("Int: %d\n", num2);

    // get full name
    // fgets(fullName, sizeof(fullName), stdin);


    return 0;
}
