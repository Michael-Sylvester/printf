#include <stdio.h>
#include "../main.h"
int print_ui(unsigned int num)
{
	unsigned int rev_num = 0;
	unsigned int temp_num = num;
	int digit_count = 0;  // variable to count the number of digits

	if (num == 0)
		{
			collab_putchar('0');
			digit_count = 1;
		}
	else
		{
			while (temp_num > 0)
				{
					rev_num = rev_num * 10 + temp_num % 10;
					temp_num /= 10;
				}

			while (rev_num > 0)
				{
					collab_putchar((rev_num % 10) + '0');
					rev_num /= 10;
					digit_count++;
				}
		}

	return digit_count;
}

int main()
{
	unsigned int num = 12345;
	int digits_written = print_ui(num);
	printf("\nNumber of digits written: %d\n", digits_written);

	return 0;
}
