# include <iostream>
# include <conio.h>
# include "header.h"

int main()
{
	int coa = 1;//ÁÐ
	int cob = 1;//ÐÐ
	int press;

	map(coa, cob);

	while (1)
	{
		press = _getch();

		if (press == 97)//a
		{
			coa--;
			map(coa, cob);
		}

		if (press == 100)//d
		{
			coa++;
			map(coa, cob);
		}

		if (press == 119)//w
		{
			cob--;
			map(coa, cob);
		}

		if (press == 115)//s
		{
			cob++;
			map(coa, cob);
		}
	}
}
