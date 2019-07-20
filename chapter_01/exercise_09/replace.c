/****************************************************************************/                                                                            
/* Exercise 1-9:                                                            */
/*      Write a program to copy its input to its output, replacing each     */
/*      string of one or more blanks by a single blank.                     */
/*                                                                          */
/* Author: Philipp Schulte.                                                 */
/*                                                                          */
/* Purpose:                                                                 */
/*      Copy input to output and replace each string of one or more blanks  */
/*      by a single blank.                                                  */
/*                                                                          */
/* Usage:                                                                   */
/*      Compile the program on your system. Run it and the formatted output */
/*      appears. The easiest way to test the program is to create a text    */
/*      file and to redirect the input (e.g. `$ ./a.out < foo`). If you     */
/*      just execute the program and type in individual characters then you */
/*      will need to use CTRL-D in order to terminate the input stream.     */
/****************************************************************************/

#include <stdio.h>

#define NONBLANK 'a'    /* arbitrary nonblank character */

int main()
{
    int c, lastc;

    lastc = NONBLANK;
    while((c = getchar()) != EOF) {
        if (c != ' ' || lastc != ' ')
            putchar(c);
        lastc = c;
    }

    return 0;
}

