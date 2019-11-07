#include <iostream>

using namespace std;

int const S = 5;
int arr[S] ={5,-12,3,2,1};

void f(int arr[S], int S)
{
    int m;
    m = arr[0];
    for (int i = 1; i < S; i++)
    {
        if (arr[i] < m)
        {
            m = arr[i];
        }
    }
    cout << m;
}

int main()
{


    f(arr,S);
//    for (int i = 0 ; i < 5; i++)
//    {
//
//        cout << arr[i] << " " ;
//    }
    return 0;
}
