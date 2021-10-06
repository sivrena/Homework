#include <iostream>

int isPrime(int a)
{
	return 1;
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
		if (A < B)
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
			if (A % 2 == 0 && A >= 4 || isPrime(B - 2))
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