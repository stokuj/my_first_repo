#include <iostream>
#include <vector>

using namespace std;

int const S = 7;

vector <int> vec{4, 9, 12, 567, 15, 24, 65};


void f(vector <int> vec, int S)
{
    vector <int> vec_rev;

    for (int i = 0; i < S; i++)
    {
        vec_rev.push_back(vec[S-i-1]);
    }

      for (int i = 0; i < S; i++)
    {
        vec[i] = vec_rev[i];
    }
}


int main()
{
    f(vec,S);

    for (int i = 0 ; i < S; i++)
    {
        cout << vec[i] << " " ;
    }
    return 0;
}
