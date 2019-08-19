/****************************************************************************/                                                                            
/* Exercise 1-12:                                                           */
/*      Write a program that prints its input one word per line.            */
/*                                                                          */
/* Author: Philipp Schulte.                                                 */
/*                                                                          */
/* Purpose:                                                                 */
/*      Copy input to output one word per line.                             */
/*                                                                          */
/* Usage:                                                                   */
/*      Compile the program on your system. Run it and the formatted output */
/*      appears. The easiest way to test the program is to create a text    */
/*      file and to redirect the input (e.g. `$ ./a.out < foo`). If you     */
/*      just execute the program and type in individual characters then you */
/*      will need to use CTRL-D in order to terminate the input stream.     */
/****************************************************************************/

#include <stdio.h>

#define IN 1    /* inside a word */
#define OUT 0   /* outside a word */

int main()
{
    int c, state;

    state = OUT;
    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\t' || c == '\n') {   /* outside a word */
            if (state == IN)                        /* finish a word */
                putchar('\n');
            state = OUT;
        } else if (state == OUT) {                  /* beginning of word */
            state = IN;
            putchar(c);
        } else                                      /* inside a word */
            putchar(c);
    }

    return 0;
}

