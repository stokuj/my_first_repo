#include <iostream>

using namespace std;

int main()
{
    int N;

    cout << "Enter how long is array: ";
    cin >> N;

    int a[N] = {};
    int x = 0;

    cout << "Enter  array: \n";
    for (int i=0;i<N;i++)
    {

        cin >> a[i];
    }

    for (int i=0;i<N;i++)
    {
        for (int j=0;j<N;j++)
        {
            if (a[i] < a[j])
            {
                x = a[j];
                a[j] = a[i];
                a[i] = x;

            }
        }
    }


    for (int i=0;i<N;i++)
    {
        cout << a[i] << ",";;
    }
    return 0;
}
