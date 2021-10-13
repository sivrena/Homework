#include <iostream>

int product(int a, int b);

int power(int a, int b);


int expression(int x, int y, char operation)
{
	switch (operation)
	{
	case '+':
		return x + y;
	case '-':
		return x - y;
	case '*':
		return product(x, y);
	case '/':
		return x / y;
	case '%':
		return x % y;
	case '^':
		return power(x, y);
	default:
		return -1;
	}
}

int product(int a, int b)
{
	return 1;
}

int power(int a, int b)
{
	return 1;
}

int main()
{
	int x, y, z;
	std::cin >> x >> y;
	z = expression(x, y, '+');
	std::cout << z << "\n";
	z = expression(x, y, '%');
	std::cout << z << "\n";
	z = expression(x, y, '/');
	std::cout << z << "\n";
	return EXIT_SUCCESS;
}