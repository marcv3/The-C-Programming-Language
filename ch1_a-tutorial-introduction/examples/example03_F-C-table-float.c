#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP  20

/* print Fahrenheit-Celsius table
 * for fahr = 0, 20, ..., 300 */
int main()
{
    float fahr, celsius;
    int lower, upper, step, fahr2;

    lower = 0;      /* lower limit of temperature table */
    upper = 300;    /* upper limit */
    step = 20;      /* step size */

    fahr = lower;
    while (fahr <= upper) {
        celsius = (5.0/9.0) * (fahr-32.0);
        printf("%3.0f %6.1f\n", fahr, celsius);
        fahr = fahr + step;
    }

    printf("\n");
    /* print Fahrenheit-Celsius table with for loop */

    for (fahr2 = LOWER; fahr2 <= UPPER; fahr2 = fahr2 + STEP)
        printf("%3d %6.1f\n", fahr2, (5.0/9.0)*(fahr2-32));
}
