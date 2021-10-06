#include <iostream>

int smallestDivisor(int a)
{
	for (int i = 2; i <= a / 2; i++)
	{
		if (a % i == 0 && i != a)
		{
			return i;
		}
	}
	return 1;
}

int main()
{
	std::cout << smallestDivisor(6);
	std::cout << smallestDivisor(49);
	std::cout << smallestDivisor(45);
	return EXIT_SUCCESS;
}