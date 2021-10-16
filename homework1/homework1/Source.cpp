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
	{
		if (y == 0)
			throw "Can not divide by zero!";
		return x / y;
	}
	case '%':
	{
		if (y == 0)
			throw "Can not divide by zero!";
		return x % y;
	}
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
	int prod = 0;
	for (int i = 0; i < abs(b); i++)
	{
		prod = sum(prod, a);
	}
	if (b < 0)
		prod = sum(~prod, 1);
	return prod;
}

int power(int a, int b)
{
	if (a == 2 && b >= 0)
		return 1 << b;
	return pow(a, b);
}

int main()
{
	int x, y, z;
	std::cin >> x >> y;
	z = expression(x, y, '^');
	std::cout << z << "\n";
	return EXIT_SUCCESS;
}