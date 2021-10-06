#include <iostream>

int isPrime(int a)
{
	int p = 1;
	if (a == 1)
		p = 0;
	else if (a == 2 || a == 3)
		p = 1;
	else
		for (int i = 2; i <= a / 2; i++)
			if (a % i == 0)
			{
				p = 0;
				break;
			}
	return p;
}

int main()
{
	int N;
	std::string h;
	std::cin >> N;
	for (int i = 0; i < N; i++)
	{
		int A, B;
		std::cout << "Enter integers A, B: ";
		std::cin >> A >> B;
		if (A <= B)
			h = "No";
		else if (B == 1)
		{
			if (isPrime(A))
				h = "Yes";
			else
				h = "No";
		}
		else if (B == 2)
		{
			if (A % 2 == 0 && A >= 4 || isPrime(A - 2))
				h = "Yes";
			else
				h = "No";
		}
		else if (B >= 3)
		{
			if (A >= 2 * B)
				h = "Yes";
			else
				h = "No";
		}
		std::cout << h << "\n";
	}
	return EXIT_SUCCESS;
}