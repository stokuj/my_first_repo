#include <iostream>

using namespace std;

int main()
{
    int N;
    int counter = 0;

    cout << "Enter N: ";
    cin >> N ;

    int f = 1;
    int b = N;

    for (int i = 0; i < N; i++)
    {
        for (int j = 1; j <= N; j++)
        {
            if (( j == f) || ( j == b ))
            {

                cout << "#";

            }
            else
            {

                cout << ".";
            }


        }
        f++;
        b--;
        cout << endl;
    }

    return 0;
}
