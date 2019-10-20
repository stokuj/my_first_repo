
#include <iostream>


int main()
{
	int N;

    std::cout << "Enter N: ";
    std::cin >> N ;

	char x = 'X';
	char z = '.';

	int a = N;
	int b = 0;



	for (int i = 0; i < N; i++)
	{



			for (int k = a ; k < N;k++ )
			{
				std::cout << z;
			}

			for (int l = b; l < N; l++)
			{
				std::cout << x;
			}


			a = a - 1;
			b = b + 1;



			std::cout << std::endl;

	}

}

