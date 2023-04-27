#include "main.h"
#include <stdio.h>
/**
* positive_or_negative - Determines if a number is positive, negative, or zero
* @i: The number to check
*
* This function takes an integer parameter and prints a message indicating
* whether the number is positive, negative, or zero.
*/
void positive_or_negative(int i)
{
if (i > 0)
printf("%d is positive\n", i);
else if (i == 0)
printf("%d is zero\n", i);
else
printf("%d is negative\n", i);
}
