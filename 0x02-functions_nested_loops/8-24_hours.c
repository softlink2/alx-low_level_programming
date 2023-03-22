#include "main.h"

/**
 * jack_bauer - prints every minute of the day from 00:00 to 23:59
*/

void jack_bauer(void)
{
	int time[4] = {0, 0, 0, 0};

	while (1)
	{
			if (time[3] > 9)
			{ 
				time[3] = 0;
				time[2]++;
			}

			if (time[2] > 5)
			{
				time[2] = 0;
				time[1]++;
			}

			if (time[1] > 9)
			{
				time[1] = 0;
				time[0]++;
			}
			
			if (time[0] == 2 && time[1] == 4)
				break;
			_putchar(time[0] + '0');
			_putchar(time[1] + '0');
			_putchar(':');
			_putchar(time[2] + '0');
			_putchar(time[3] + '0');
			_putchar('\n');
			time[3]++;
	}
}
