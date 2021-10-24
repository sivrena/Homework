#include <iostream>

const int N = 6;

void print(int p[N][N])
{
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			std::cout << p[i][j] << "	";
		}
		std::cout << "\n";
	}
	std::cout << "	\n";
}

void magicSpin(int (&p)[N][N])
{
	//starting from 0 layer
	for (int i = 0; i < N; i++)
	{
		if (i % 2 == 0)
		{

			//clockwise rotation

			int h = p[i][i];
			int f = p[i][i + 1];

			//top row of layer
			for (int j = 1 + i; j < N - i; j++)
			{
				p[i][j] = h;
				h = f;
				if (j != N - i - 1)
					f = p[i][j + 1];
			}

			//right column of the layer
			h = p[1 + i][N - 1 - i];
			for (int j = 1 + i; j < N - i; j++)
			{
				p[j][N - 1 - i] = f;
				f = h;
				if (j != N - i - 1)
					h = p[j + 1][N - 1 - i];
			}

			//bottom row of layer
			f = p[N - 1 - i][N - 2 - i];
			for (int j = N - 2 - i; j >= i; j--)
			{
				p[N - 1 - i][j] = h;
				h = f;
				if (j != i)
					f = p[N - 1 - i][j - 1];
			}

			//left column of the layer
			h = p[N - 2 - i][i];
			for (int j = N - 2 - i; j >= i; j--)
			{
				p[j][i] = f;
				f = h;
				if (j != i)
					h = p[j - 1][i];

			}
		}

		else
		{

			//counterclockwise rotation

			int h = p[i][N - 1 - i];
			int f = p[i][N - 2 - i];

			//top row of layer
			for (int j = N - 2 - i; j >= i; j--)
			{
				p[i][j] = h;
				h = f;
				if (j != i)
					f = p[i][j - 1];
			}

			//left column of the layer
			h = p[1 + i][i];
			for (int j = 1 + i; j < N - i; j++)
			{
				p[j][i] = f;
				f = h;
				if (j != N - i - 1)
					h = p[j + 1][i];
			}
			
			//bottom row of layer
			f = p[N - 1 - i][i + 1];
			for (int j = 1 + i; j < N - i; j++)
			{
				p[N - 1 - i][j] = h;
				h = f;
				if (j != N - i - 1)
					f = p[N - 1 - i][j + 1];
			}
			
			//right column of the layer
			h = p[N - 2 - i][N - 1 - i];
			for (int j = N - 2 - i; j >= i; j--)
			{
				p[j][N - 1 - i] = f;
				f = h;
				if (j != i)
					h = p[j - 1][N - 1 - i];

			}
		}
	}
}

void magicSort(int n, int(&p)[N][N])
{
	if (n % 2 == 0)
	{
		//sorting in ascending order along the main diagonal

		for (int i = 0; i < N - 1; i++)
		{
			for (int j = 0; j < N - 1; j++)
			if (p[j][j] > p[j + 1][j + 1])
				std::swap(p[j][j], p[j + 1][j + 1]);
		}
		
		
		for (int k = 0; k < N - 1; k++)
		{
			for (int i = 0; i < N - 1; i++)
			{
				for (int j = i + 1; j < N - 1; j++)
				{
					if (p[i][j] > p[i + 1][j + 1])
						std::swap(p[i][j], p[i + 1][j + 1]);
					if (p[j][i] > p[j + 1][i + 1])
						std::swap(p[j][i], p[j + 1][i + 1]);
				}
			}
		}

	}
	else
	{

		//sorting in descending order along the side diagonal

		for (int i = 0; i < N - 1; i++)
		{
			for (int j = 0; j < N - 1; j++)
				if (p[j][N - 1 - j] < p[j + 1][N - 2 - j])
					std::swap(p[j][N - 1 - j], p[j + 1][N - 2 - j]);
		}


		for (int k = 0; k < N - 1; k++)
		{
			for (int i = 0; i < N - 1; i++)
			{
				for (int j = N - 2 - i; j > 0; j--)
				{
					if (p[i][j] < p[i + 1][j - 1])
						std::swap(p[i][j], p[i + 1][j - 1]);
					if (p[N - 1 - j][N - 1 - i] < p[N - j][N - 2 - i])
						std::swap(p[N - 1 - j][N - 1 - i], p[N - j][N - 2 - i]);
				}
			}
		}

	}
}

int main()
{

	int count = 1;
	int magicArray[N][N];
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			magicArray[i][j] = count;
			count++;
		}
	}
	print(magicArray);

	int choice = 0, k = 0;
	while (choice != -1)
	{
		std::cout << "Enter 0 for magic rotation or 1 for magic sort:	";
		std::cin >> choice;
		switch (choice)
		{
		case (0):
			k++;
			magicSpin(magicArray);
			print(magicArray);
			break;
		case (1):
			magicSort(k, magicArray);
			print(magicArray);
			break;
		default:
			std::cout << "Enter 0 or 1 or -1!" << "\n";
		}
	}


	return EXIT_SUCCESS;
}