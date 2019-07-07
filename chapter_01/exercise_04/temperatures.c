/****************************************************************************/                                                                            
/* Exercise 1-4:                                                            */
/*      Write a program to print the corresponding Celsius to Fahrenheit    */
/*      table.                                                              */
/*                                                                          */
/* Author: Philipp Schulte.                                                 */
/*                                                                          */
/* Purpose:                                                                 */
/*      Learn how to format output using printf.                            */
/*                                                                          */
/* Usage:                                                                   */
/*      Compile the program on your system. Run it and the table of         */
/*      Celsius temperatures and their Fahrenheit equivalents appears.      */
/****************************************************************************/

#include <stdio.h>

int main()
{
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;      /* lower limit of temperature table */
    upper = 300;    /* upper limit */
    step = 20;      /* step size */

    printf("Celsius\t\t|\tFahrenheit\n");
    fahr = lower;
    while (celsius <= upper) {
        fahr = ((9.0/5.0) * celsius) + 32;
        printf("%6.0f\t\t|\t%6.1f\n", celsius, fahr);
        celsius = celsius + step;
    }

    return 0;
}

