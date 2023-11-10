#include "main.h"

/**
 * print_i - This function prints an integer
 * @args: Arguments to print
 * Return: An integer
 */
void print_int(int n)
{    
    int num, last_digit = n % 10, digit, power_of_10 = 1;
    int count = 1;  /* initialized count to 1 */

	n = n / 10;
	num = n;

    if (last_digit < 0)
    {
        collab_putchar('-');
        num = -num;
        n = -n;
        last_digit = -last_digit;
        count++;
    }
    if (num > 0)
    {
        while (num / 10 != 0)
        {
            power_of_10 = power_of_10 * 10;
            num = num / 10;
        }
        num = n;
        while (power_of_10 > 0)
        {
            digit = num / power_of_10;
            collab_putchar(digit + '0');
            num = num - (digit * power_of_10);
            power_of_10 = power_of_10 / 10;
            count++;
        }
    }
    collab_putchar(last_digit + '0');
    
}
