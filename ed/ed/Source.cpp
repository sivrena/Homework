#include <iostream>

int main()
{
	setlocale(LC_ALL, "Russian");
	int N;
	std::cin >> N;
	for (int i = 0; i < N; i++)
	{
		int M, F, intX;
		double X;
		std::cout << "Введите числа M, F: ";
		std::cin >> M >> F;
		X = sqrt(F);
		intX = int(X);
		if (X - intX == 0)
		{
			std::cout << "Да" << "\n";
		}
		else
		{
			X = sqrt(F + M);
			intX = int(X);
			if (X - intX == 0)
			{
				std::cout << "Да" << "\n";
			}
			else
			{
				std::cout << "Нет" << "\n";
			}
		}
	}
	return EXIT_SUCCESS;
}