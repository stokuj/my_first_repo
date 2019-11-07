#include <iostream>

using namespace std;

int const S = 5;
int arr[S] ={5,-12,3,2,1};

void f(int arr[S], int S)
{
    int arr_rev[S] = {};

    for (int i = 0; i < S; i++)
    {
        arr_rev[i] = arr[S-i-1];
    }

    for (int i = 0; i < S; i++)
    {
        arr[i] = arr_rev[i];
    }
}

int main()
{


    f(arr,S);
    for (int i = 0 ; i < S; i++)
    {

        cout << arr[i] << " " ;
    }
    return 0;
}
