#include <iostream>

int main()
{
	setlocale(LC_ALL, "rus");

	int num;
	char power;
    std::cout << "Введите ваше число: ";
	std::cin >> num;
	std::cout << "Введите степень (до 7): ";
	std::cin >> power;
	
	//std::cout << num <<" в "<< power <<" = " << pow(num, power);

	switch (power) {
	case '1':
	{
		std::cout << num << " в " << 1 << " cтепени "<< " = " << pow(num, 1) << "\n";
		break;
	}
	case '2':
	{
		std::cout << num << " в " << 2 << " cтепени " << " = " << pow(num, 2) << "\n";
		break;
	}
	case '3':
	{
		std::cout << num << " в " << 3 << " cтепени "<< " = " << pow(num, 3) << "\n";
		break;
	}
	case '4':
	{
		std::cout << num << " в " << 4 << " cтепени " << " = " << pow(num, 4) << "\n";
		break;
	}
	case '5':
	{
		std::cout << num << " в " << 5 << " cтепени " << " = " << pow(num, 5) << "\n";
		break;
	}
	case '6':
	{
		std::cout << num << " в " << 6 <<  " cтепени " << " = " << pow(num, 6) << "\n";
		break;
	}
	case '7':
	{
		std::cout << num << " в " << 7 << " cтепени " << " = " << pow(num, 7) << "\n";
		break;
	}
	default:
		std::cout << "Значение неверное";
	}
	return(0);

}

