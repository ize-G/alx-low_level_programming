#include "main.h"

/**
 * main- Prints the number 1 to 10 followed by a new line
 *	for multiples of 3 print Fizz
 *	for multiples of 5 print Buzz
 *	for multiples of both 3 and 5 print FizzBuzz
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i;

for (i = 1; i <= 100; i++)
{
if ((i % 3 != 0) && (i % 5 != 0))
{
printf("%d ", i);
}
else if ((i % 3 == 0) && (i % 5 == 0))
{
printf("FizzBuzz ");
}
else if (i % 3 == 0)
{
printf("Fizz ");
}
else if (i % 5 == 0)
{
printf("Buzz ");
}
}
printf("\n");
return (0);
}
