#include <iostream>

using namespace std;

int const S = 7;
int arr[S] ={4, 9, 12, 567, 15, 24, 65};
int m = 7;


void f(int arr[S], int S,int m)
{

    for (int i = 0; i < S; i++)
    {
        arr[i] = arr[i] % 7;
    }



}


int main()
{
    f(arr,S,m);
    for (int i = 0 ; i < S; i++)
    {

        cout << arr[i] << " " ;
    }
    return 0;
}
