#include "main.h"

/* Prints out whether the stored number is +ve or-ve */

/**
 * positive_or_negative- Entry point
 *@i: Integer to be computed
 *
 */

void positive_or_negative(int i)

{

		if (i > 0)
		{
			printf("%d is positive\n", i);
		}
		else if (i == 0)
		{
			printf("%d is zero\n", i);
		}
		else
		{
			printf("%i is negative\n", i);
		}
}
