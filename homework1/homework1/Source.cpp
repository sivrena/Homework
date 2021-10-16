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

int sum(int a, int b)
{
	int carrybit = (a & b) << 1;
	int res = a ^ b;
	while (carrybit != 0)
	{
		int carry = (res & carrybit) << 1;
		res = res ^ carrybit;
		carrybit = carry;
	}
	return res;
}

int product(int a, int b)
{

	return 1;
}

int power(int a, int b)
{
	return -1;
}

int main()
{
	int x, y, z;
	std::cin >> x >> y;
	z = sum(x, y);
	std::cout << z << "\n";
	return EXIT_SUCCESS;
}