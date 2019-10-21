#include <iostream>

using namespace std;

int main()
{
    int N;
    int counter = 0;

    cout << "Enter N: ";
    cin >> N ;

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (counter == 0)
            {
                cout << "#";
                counter++;

            }
            else
            {
                cout << ".";
                counter++;
            }
            // counter reset every N + 1 Time. Move 1 every line.
            if (counter == N+1)
            {
                counter = 0;
            }

        }

        cout << endl;
    }

    return 0;
}
