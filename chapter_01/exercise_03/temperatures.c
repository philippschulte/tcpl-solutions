/****************************************************************************/                                                                            
/* Exercise 1-3:                                                            */
/*      Modify the temperature conversion program to print a heading above  */
/*      the table.                                                          */
/*                                                                          */
/* Author: Philipp Schulte.                                                 */
/*                                                                          */
/* Purpose:                                                                 */
/*      Learn how to format output using printf.                            */
/*                                                                          */
/* Usage:                                                                   */
/*      Compile the program on your system. Run it and the table of         */
/*      Fahrenheit temperatures and their Celsius equivalents appears.      */
/****************************************************************************/

#include <stdio.h>

int main()
{
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;      /* lower limit of temperature table */
    upper = 300;    /* upper limit */
    step = 20;      /* step size */

    printf("Fahrenheit\t|\tCelsius\n");
    fahr = lower;
    while (fahr <= upper) {
        celsius = (5.0/9.0) * (fahr-32.0);
        printf("%6.0f\t\t|\t%6.1f\n", fahr, celsius);
        fahr = fahr + step;
    }

    return 0;
}

