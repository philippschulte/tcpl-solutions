/****************************************************************************/                                                                            
/* Exercise 1-6:                                                            */
/*      Verify that the expression getchar() != EOF is 0 or 1.              */
/*                                                                          */
/* Author: Philipp Schulte.                                                 */
/*                                                                          */
/* Purpose:                                                                 */
/*      Learn how EOF works and what it is used for.                        */
/*                                                                          */
/* Usage:                                                                   */
/*      Compile the program on your system. Run it and the value of the     */
/*      expression getchar() != EOF appears. The easiest way to test the    */
/*      program is to create a file with characters and to redirect the     */
/*      input (e.g. `$ ./a.out < foo`). If you just execute the program     */
/*      and type in individual characters then you will need to use CTRL-D  */
/*      in order to terminate the input stream.                             */
/****************************************************************************/

#include <stdio.h>

int main()
{
    int c;

    while ((c = getchar()) != EOF)
        printf("getchar() != EOF => %d (inside loop => end of line has not been reached)\n", c != EOF);
    printf("getchar() != EOF => %d (outside loop => end of line has been reached)\n", c != EOF);

    return 0;
}

