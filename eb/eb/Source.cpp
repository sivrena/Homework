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
	int N;
	std::cin >> N;
	for (int i = 0; i < N; i++)
	{
		int A;
		std::cout << "Enter an integer: ";
		std::cin >> A;
		if (smallestDivisor(A) != 1)
			std::cout << "The product of the greatest and smallest divisor of number is " << A << "\n";
		else
			std::cout << "There are no divisors except 1 and the number itself" << "\n";
	}
	return EXIT_SUCCESS;
}