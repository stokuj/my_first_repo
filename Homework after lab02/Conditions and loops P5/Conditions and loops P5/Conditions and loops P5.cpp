	
#include <iostream>			

int main()
{
	bool back = 0;
	int N = 12;
	

	char x = 'X';
	char z = '.';




	if (N % 2 == 0)
	{

		int a = (N - 1) / 2;
		int b = 0;

		for (int i = 0; i < N-1; i++)
		{

			for (int j = a; j < (N - 1) / 2; j++)
			{

				std::cout << z;
			}

			for (int k = b; k < N; k++)
			{

				std::cout << x;
			}

			for (int l = a; l < (N - 1) / 2; l++)
			{

				std::cout << z;
			}


			


			if (back == 0)
			{
				a = a - 1;
				b = b + 2;
			}
			if (back == 1)
			{
				a = a + 1;
				b = b - 2;
			}

			if (b == 4)
			{
				std::cout << std::endl;
				back = 1;
				std::cout << "..XX..";
			}

			
			std::cout << std::endl;

		}
	}

	
	if (N % 2 == 1)
	{	

		int a = (N - 1) / 2;
		int b = 0;

		for (int i = 0; i < N; i++)
		{

			for (int j = a; j < (N - 1) / 2; j++)
			{

				std::cout << z;
			}

			for (int k = b; k < N; k++)
			{

				std::cout << x;
			}

			for (int l = a; l < (N - 1) / 2; l++)
			{

				std::cout << z;
			}

			if (back == 0)
			{
				a = a - 1;
				b = b + 2;
			}
			if (back == 1)
			{
				a = a + 1;
				b = b - 2;
			}

			if (b > N - 2)
			{
				back = 1;
			}
			std::cout << std::endl;

		}
	}
}


