
#include <iostream>


int main()
{
	int N = 6;
	int W = 5;
	int K = 8;

	char x = 'X';
	char z = '.';

	int a = 6;
	int b = 0;

	

	for (int i = 0; i < N; i++)
	{

			
			
			for (int k = a ; k < 6;k++ )
			{
				std::cout << z;
			}

			for (int l = b; l < 6; l++)
			{
				std::cout << x;
			}

			
			a = a - 1;
			b = b + 1;
			
		

			std::cout << std::endl;

	}

}

