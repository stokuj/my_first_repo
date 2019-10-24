
#include <iostream>


int main()
{
	int N;

    std::cout << "Enter N: ";
    std::cin >> N ;

	char x = 'X';
	char z = '.';

	int a = N-1;
	int b = 1;



	for (int i = 0; i < N; i++)
	{
		for (int k = b; k < N; k++)
		{
			std::cout << z;
		}

		for (int l = a; l < N; l++)
		{
			std::cout << x;
		}

		a = a - 1;
		b = b + 1;

		std::cout << std::endl;

	}

}

