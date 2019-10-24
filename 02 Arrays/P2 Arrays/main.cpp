#include <iostream>

using namespace std;

int main()
{
    const int N = 6;
    const int M = 5;
    int O = N + M;

    int a[N] = {2,6,9,10,12,15};
    int b[M] = {1,3,7,8,20};
    int c[O] = {};

    int j = 0; // a
    int k = 0; // b

    for (int i = 0; i < O;i++)
    {
        if (a[j] > b[k])
        {
            c[i] = b[k];
            k++;
        }
        else
        {
            c[i] = a[j];
            j++;
        }




    }
//////////////////////////////////////////
    for (int i = 0; i < O; i++)
    {
        cout << c[i] << ",";
    }


    return 0;
}
