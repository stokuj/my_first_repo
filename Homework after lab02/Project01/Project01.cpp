#include <iostream>

int main()
{
	bool back = 0;
	int N;

    std::cout << "Enter N: ";
    std::cin >> N ;
    std::cout<< std::endl;

	char x = '#';
	char z = '.';


    int b = 0; // mid
    int a_odd = (N-1)/2; // right & left
    int a_even = N/2;   // right & left

	if ( N%2 == 0)
    {
        //  Parzyste EVEN
        for (int i = 0; i < N; i++)
        {


            if (i == N/2)
            {
                a_even = a_even + 1;
                b = b - 2;
            }

            // LEWE .
            for (int j = a_even; j < N/2; j++)
            {

                std::cout << z;
            }
            //X
            for (int k = b; k < N; k++)
            {

                std::cout << x;
            }
            // PRAWE .
            for (int j = a_even; j < N/2; j++)
            {

                std::cout << z;
            }
            //zmiana kierunku
            if ( back == 0)
            {
                a_even = a_even - 1;
                b = b + 2;
            }
            if (back == 1)
            {
                a_even = a_even + 1;
                b = b - 2;
            }

            if (b > N-2)
            {
            back = 1;
            }
            // koniec zmiany kierunku
            std::cout << std::endl;
        }
    }

    if (N%2 == 1)
    {
        //  Nieparzyste ODD
        for (int i = 0; i < N; i++)
        {


            // LEWE .
            for (int j = a_odd; j < (N-1)/2; j++)
            {

                std::cout << z;
            }
            //X
            for (int k = b; k < N; k++)
            {

                std::cout << x;
            }
            // PRAWE .
            for (int j = a_odd; j < (N-1)/2; j++)
            {

                std::cout << z;
            }
            //zmiana kierunku
            if ( back == 0)
            {
                a_odd = a_odd - 1;
                b = b + 2;
            }
            if (back == 1)
            {
                a_odd = a_odd + 1;
                b = b - 2;
            }

            if (b > N-2)
            {
                back = 1;
            }
            // koniec zmiany kierunku
            std::cout << std::endl;
        }
    }
}
