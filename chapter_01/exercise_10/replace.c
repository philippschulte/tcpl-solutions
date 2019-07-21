/****************************************************************************/                                                                            
/* Exercise 1-10:                                                           */
/*      Write a program to copy its input to its output, replacing each     */
/*      tab by \t, each backspace by \b, and each backslash by \\. This     */
/*      makes tabs and backspaces visible in an unambiguous way.            */
/*                                                                          */
/* Author: Philipp Schulte.                                                 */
/*                                                                          */
/* Purpose:                                                                 */
/*      Copy input to output and replace each tab by \t, each backspace     */
/*      by \b, and each backslash by \\.                                    */
/*                                                                          */
/* Usage:                                                                   */
/*      Compile the program on your system. Run it and the formatted output */
/*      appears. The easiest way to test the program is to create a text    */
/*      file and to redirect the input (e.g. `$ ./a.out < foo`). If you     */
/*      just execute the program and type in individual characters then you */
/*      will need to use CTRL-D in order to terminate the input stream.     */
/****************************************************************************/

#include <stdio.h>

int main()
{
    int c;

    while ((c = getchar()) != EOF) {
        if (c == '\t')
            printf("\\t");
        else if (c == '\b')
            printf("\\b");
        else if (c == '\\')
            printf("\\\\");
        else
            putchar(c);
    }

    return 0;
}

