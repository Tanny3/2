#include <iostream>

int main()
{
	setlocale(LC_ALL, "rus");
	int f_num, s_num;
	char action;
	std::cout << "Введите первое число: ";
	std::cin >> f_num;
	std::cout << "Введите второе число: ";
	std::cin >> s_num;
	std::cout << "Выберите действее [-,+,*,/,%]: ";
	std::cin >> action;
	switch (action) {
	case '+':
	{
		std::cout << f_num << "+" << s_num << "=" << f_num + s_num << "\n";
		break;
	}
	case '-':
	{
		std::cout << f_num << "-" << s_num << "=" << f_num - s_num << "\n";
		break;
	}
	case '*':
	{
		if (f_num == 0 || s_num == 0)
			std::cout << "на ноль нельзя умножить";
		else
			std::cout << f_num << "*" << s_num << "=" << f_num * s_num << "\n";
		break;

	}
	case '/':
	{
		if (f_num == 0 || s_num == 0)
			std::cout << "на ноль нельзя делить";
		else
		std::cout << f_num << "/" << s_num << "=" << f_num / s_num << "\n";
		break;
	}
	case '%':
	{
		std::cout << f_num << "%" << s_num << "=" << f_num % s_num << "\n";
		break;
	}
	default:
		std::cout << "Значение неверное";
	}
	return(0);
}

