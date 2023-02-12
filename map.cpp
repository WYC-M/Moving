# include <iostream>
# include <stdlib.h>

void map(int a, int b)//a:ÁÐ,b:ÐÐ
{
	system("cls");
	
	for (int i = 0; i < (b - 1); i++)
	{
		std::cout << "--------------------" << std::endl;
	}

	for (int i = 0; i < (a - 1); i++)
	{
		std::cout << "-";
	}

	std::cout << "=";

	for (int i = 0; i < (20 - a); i++)
	{
		std::cout << "-";
	}

	std::cout << std::endl;

	for (int i = 0; i < (10 - b); i++)
	{
		std::cout << "--------------------" << std::endl;
	}
}