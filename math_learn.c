#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    short x = 9;
    x = sqrt(x);
    printf("%d", x);

    x = pow(x, 2);
    printf(" %d", x);

    float y = 1.14;
    y = round(y);
    // ceil() rounds up
    // floor() rounds down
    printf(" %f", y);

    x = -3;
    x = abs(x);
    printf(" %d", x);

    y = 3.00;
    y = log(y);
    printf(" %f", y);

    // sin() for sine, cos() for cosine
    
    return 0;
}