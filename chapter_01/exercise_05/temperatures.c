/****************************************************************************/                                                                            
/* Exercise 1-5:                                                            */
/*      Modify the temperature conversion program to print the table in     */
/*      reverse order, that is, from 300 degrees to 0.                      */
/*                                                                          */
/* Author: Philipp Schulte.                                                 */
/*                                                                          */
/* Purpose:                                                                 */
/*      Learn how to use the for iteration statement.                       */
/*                                                                          */
/* Usage:                                                                   */
/*      Compile the program on your system. Run it and the table of         */
/*      Fahrenheit temperatures and their Celsius equivalents appears.      */
/****************************************************************************/

#include <stdio.h>

int main()
{
    int fahr;
    
    printf("Fahrenheit\t|\tCelsius\n");
    for (fahr = 300; fahr >= 0; fahr = fahr - 20)
        printf("%6d\t\t|\t%6.1f\n", fahr, (5.0/9.0) * (fahr-32.0));

    return 0;
}

