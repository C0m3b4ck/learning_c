#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
    // variables
    float side = 0.00000;
    float diagonal = 0.00000;
    float area = 0.00000;
    char unit[3] = "";

    // get what user wants to calculate
    char choice[2] = "";
    printf("Check square [s] or calculate [c]: ");
    fgets(choice, sizeof(choice), stdin);
    choice[sizeof(choice) - 1] = '\0';

    if (choice [0] == 'c') //calculation
    {
        // get input
        printf("Input side (zero if none): ");
        scanf("%f", &side);

        printf("Input diagonal (zero if none): ");
        scanf("%f", &diagonal);

        printf("Input area (zero if none): ");
        scanf("%f", &area);

        // calculate each if possible
        if (side != 0)
        {
            area = side * side;
            diagonal = sqrt(2 * area);
        }
        else if (diagonal != 0)
        {
            area = (diagonal * diagonal) / 2.0;
            side = sqrt(area);
        }
        else if (area != 0)
        {
            side = sqrt(area);
            diagonal = sqrt(area * 2);
        }
        else
        {
            printf("NO WAY TO CALCULATE - ALL ARE EMPTY!!!\n");
        }

        // output
        printf("===============")
        printf("Area: %f %s\n", area, unit);
        printf("Diagonal: %f %s\n", area, unit);
        area = round(area);
        printf("Rounded area: %.2f %s\n", area, unit);
        printf("Rounded diagonal: %.2f %s\n", area, unit);
    }
    else if (choice[0] == 's') //checking logic
    {
        // check area, diagonals, sides
        if ((diagonals * 2) / 2) == area && (side * side) == area))
        {
            printf("All is correct!\n");
        }
    }

    return 0;
}
