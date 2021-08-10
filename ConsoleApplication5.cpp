#include <iostream>

int main()
{
	setlocale(LC_ALL, "rus");

	int  num{ 0 }, k{ 0 }, s{ 0 };

	std::cout << "Введите число на билетике : \n";
	std::cin >> num;

	if (999999 > num || num > 999999)
	{
		if (num / 100000 + num / 10000 % 10 + num / 1000 % 10 == num / 100 % 10 + num / 10 % 10 + num % 10)
		{

			std::cout << "Билетик счастливый";
		}
		else
		{ 
			std::cout << "Билетик грустный";
		}
	}
	else
		std::cout << "Неверный ввод";

	return(0);
}
