/****************************************************************************/                                                                            
/* Exercise 1-8:                                                            */
/*      Write a program to count blanks, tabs, and newlines.                */
/*                                                                          */
/* Author: Philipp Schulte.                                                 */
/*                                                                          */
/* Purpose:                                                                 */
/*      Count blanks, tabs, and newlines in input.                          */
/*                                                                          */
/* Usage:                                                                   */
/*      Compile the program on your system. Run it and the result output    */
/*      of how many blanks, tabs, and newlines are included in the input    */
/*      stream appears. The easiest way to test the program is to create    */
/*      a file with characters and to redirect the input                    */
/*      (e.g. `$ ./a.out < foo`). If you just execute the program and type  */
/*      in individual characters then you will need to use CTRL-D in order  */
/*      to terminate the input stream.                                      */
/****************************************************************************/

#include <stdio.h>

int main()
{
    int c, b, t, nl;

    b = 0;      /* number of blanks */
    t = 0;      /* number of tabs */
    nl = 0;     /* number of newlines */
    while ((c = getchar()) != EOF) {
        if (c == ' ')
            ++b;
        if (c == '\t')
            ++t;
        if (c == '\n')
            ++nl;
    }
    printf("blanks: %d, tabs: %d, newlines: %d\n", b, t, nl);

    return 0;
}

