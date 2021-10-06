#include <iostream>

int fib(int f)
{
	int F1 = 1, F2 = 1, temp;
	while (F2 < f)
	{
		temp = F2;
		F2 += F1;
		F1 = temp;
	}
	if (F2 == f)
		return 1;
	else
		return 0;
}

int main()
{
	setlocale(LC_ALL, "Russian");
	int N;
	std::cin >> N;
	for (int i = 0; i < N; i++)
	{
		int F;
		std::cout << "Введите число: ";
		std::cin >> F;
		if (fib(F))
			std::cout << "Фибоначчи" << "\n";
		else
			std::cout << "Увы" << "\n";
	}
	return EXIT_SUCCESS;
}