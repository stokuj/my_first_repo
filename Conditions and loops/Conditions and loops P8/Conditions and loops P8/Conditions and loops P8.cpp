#include <iostream>



int main()
{
    std::cout << "Enter N:";
    int N;
    std::cin >> N;

	char x = 'X';
	char z = '.';

	int counter = 0;

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N/2; j++)
		{

			std::cout << x;
		}

		for (int j = 0; j < N/2; j++)
		{

			std::cout << z;
		}


        counter++;
        if ( counter == 3)
        {
            if (x == 'X')
            {
                x = '.';
                z = 'X';
            }
            else
            {
                z = '.';
                x = 'X';
            }
        counter = 0;
        }


		std::cout << std::endl;
	}


}
