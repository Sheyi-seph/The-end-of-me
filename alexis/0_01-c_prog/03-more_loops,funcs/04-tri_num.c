/* num triangle pattern
 *    1
 *   121
 *  12321
 * 1234321
 *123454321
 **/
#include "Mayor.h"

void tri_num(int cou)
{
	int row, osp, no1, no2;

	for (row = 1; row <= cou; row++)
	{
		for (osp = cou - row; osp > 0; osp--)
			putchar(' ');
		for (no1 = 1; no1 <= row; no1++)
			printf("%d", no1);
		for (no2 = cou - 1; no2 > 0; no2--)
		{
			if (no2 <= (row - 1))
				printf("%d", no2);
		}

		putchar('\n');
	}
}
