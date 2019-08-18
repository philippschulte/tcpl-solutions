/****************************************************************************/
/* Exercise 1-11:                                                           */
/*      How would you test the word count program? What kinds of input are  */
/*      most likely to uncover bugs if there are any?                       */
/*                                                                          */
/* Author: Philipp Schulte.                                                 */
/*                                                                          */
/* Purpose:                                                                 */
/*      Learn to find edge cases which might break your program and to      */
/*      write unit tests in order to make sure that your program behaviors  */
/*      as expected now and in the future if you make changes to it.        */
/*                                                                          */
/* Usage:                                                                   */
/*      Compile the program on your system. Run it and the result of the    */
/*      unit tests appears.                                                 */
/****************************************************************************/

#include <stdio.h>
#include <string.h>

void wc(char[], int[]);
int deepEqual(int[], int[], int);

int main()
{
    int i;
    int actualOutput[3];

    struct {
        char input[15];
        int expectedOutput[3];
        char description[100];
    } cases[] = {
        "",                 {0, 0, 0},  "No input",
        "a\n",              {1, 1, 2},  "One character word",
        "a b\n",            {1, 2, 4},  "Two one character words",
        "a b c\n",          {1, 3, 6},  "Three one character words",
        "foo bar\n",        {1, 2, 8},  "Two three character words",
        "\n\n\n",           {3, 0, 3},  "Three newlines",
        "\t\t\t\n",         {1, 0, 4},  "Three tabs",
        "   \n",            {1, 0, 4},  "Three space characters",
        "   \t\t\t\n\n\n",  {3, 0, 9},  "Three spaces, tabs, and newlines",
        "\n\n\naaaaaaa\n",  {4, 1, 11}, "Three newlines and one big word",
        "\t\t\tbbbbbbb\n",  {1, 1, 11}, "Three tabs and one big word",
        "   cccccccccc\n",  {1, 1, 14}, "Three spaces and one big word",
        "aaaaaaaaaaaaa\n",  {1, 1, 14}, "One big word"
    };
    for (i = 0; i < 13; i++) {
        wc(cases[i].input, actualOutput);
        if (!deepEqual(cases[i].expectedOutput, actualOutput, 3)) {
            printf("FAILED\t%s\n", cases[i].description);
            printf("\tExpected: [%d, %d, %d]\n",
                    cases[i].expectedOutput[0],
                    cases[i].expectedOutput[1],
                    cases[i].expectedOutput[2]);
            printf("\tActual:   [%d, %d, %d]\n",
                    actualOutput[0],
                    actualOutput[1],
                    actualOutput[2]);
        } else
            printf("PASSED\t%s\n", cases[i].description);
    }

    return 0;
}

/****************************************************************************/
/* wc -- Counts lines, words, and characters in input.                      */
/*                                                                          */
/* Parameters:                                                              */
/*      str    -- Array of characters which represents the input string.    */
/*      result -- Array of three integers to store the result of the        */
/*                computation.                                              */
/****************************************************************************/
void wc(char str[], int result[])
{
    int i, l, c, nl, nw, nc, state;

    state = 0;
    l = strlen(str);
    nl = nw = nc = 0;
    for (i = 0; i < l; i++) {
        c = str[i];
        ++nc;
        if (c == '\n')
            ++nl;
        if (c == ' ' || c == '\n' || c == '\t')
            state = 0;
        else if (state == 0) {
            state = 1;
            ++nw;
        }
    }
    result[0] = nl;
    result[1] = nw;
    result[2] = nc;
}

/****************************************************************************/
/* deepEqual -- Reports whether two arrays of integers are "deeply equal".  */
/*                                                                          */
/* Parameters:                                                              */
/*      a -- First array of integers to compare for deep equality.          */
/*      b -- Second array of integers to compare for deep equality.         */
/*      l -- Length of the arrays.                                          */
/*                                                                          */
/* Returns:                                                                 */
/*      0 -- The arrays of integers are not deeply equal.                   */
/*      1 -- The arrays of integers are deeply equal.                       */
/*                                                                          */
/* Notes:                                                                   */
/*      Array values are deeply equal when their corresponding elements are */
/*      deeply equal. Both arrays must be of the same size!                 */
/****************************************************************************/
int deepEqual(int a[], int b[], int l)
{
    int i;

    for (i = 0; i < l; i++)
        if (a[i] != b[i])
            return 0;

    return 1;
}

