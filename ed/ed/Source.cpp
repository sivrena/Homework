#include <iostream>

int isInteger(int f)
{
	double x;
	int intx;
	x = sqrt(f);
	intx = int(x);
	if (x - intx == 0)
		return 1;
	else
		return 0;
}

int main()
{
	int N;
	std::cin >> N;
	for (int i = 0; i < N; i++)
	{
		int M, F;
		std::cout << "Enter integers M, F: ";
		std::cin >> M >> F;
		if (isInteger(F))
			std::cout << "Yes" << "\n";
		else
		{
			if (isInteger(F + M))
				std::cout << "Yes" << "\n";
			else
				std::cout << "No" << "\n";
		}
	}
	return EXIT_SUCCESS;
}