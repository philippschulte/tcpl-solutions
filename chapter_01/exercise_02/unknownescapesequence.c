/****************************************************************************/                                                                            
/* Exercise 1-2:                                                            */
/*      Experiment to find out what happens when printf's argument string   */
/*      contains \c, where c is some character not listed above.            */
/*                                                                          */
/* Author: Philipp Schulte.                                                 */
/*                                                                          */
/* Purpose:                                                                 */
/*      Demonstration that the behavior of unknown escape sequences is      */
/*      undefined and compiler dependent.                                   */
/*                                                                          */
/* Usage:                                                                   */
/*      Try to compile the program on your system. I am using the GCC       */
/*      compiler which throws three warnings (unknown escape sequences).    */
/*      If it compiles run it and the message appears.                      */
/****************************************************************************/

#include <stdio.h>

int main()
{
    printf("hello, world\c");
    printf("hello, world\d");
    printf("hello, world\z");
    return 0;
}

