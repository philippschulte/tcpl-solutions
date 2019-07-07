/****************************************************************************/                                                                            
/* Exercise 1-1:                                                            */
/*      Run the "hello, world" program on your system. Experiment with      */
/*      leaving out parts of the program, to see what error messages you    */
/*      get.                                                                */
/*                                                                          */
/* Author: Philipp Schulte.                                                 */
/*                                                                          */
/* Purpose:                                                                 */
/*      Demonstration that the compiler will throw an error if the          */
/*      semicolon after the printf call (line 24) is missing.               */
/*                                                                          */
/* Usage:                                                                   */
/*      Try to compile the program on your system and the error message     */
/*      appears.                                                            */
/****************************************************************************/

#include <stdio.h>

int main()
{
    printf("hello, world\n")
    return 0;
}

