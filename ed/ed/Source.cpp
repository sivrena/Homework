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
		std::cout << "������� ����� M, F: ";
		std::cin >> M >> F;
		X = sqrt(F);
		intX = int(X);
		if (X - intX == 0)
		{
			std::cout << "��" << "\n";
		}
		else
		{
			X = sqrt(F + M);
			intX = int(X);
			if (X - intX == 0)
			{
				std::cout << "��" << "\n";
			}
			else
			{
				std::cout << "���" << "\n";
			}
		}
	}
	return EXIT_SUCCESS;
}