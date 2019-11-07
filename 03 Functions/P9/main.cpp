#include <iostream>
#include <vector>

using namespace std;

unsigned const int S = 4;


void f(int S)
{
    vector <int> vec;
    int  i, flag;
    int low = 2;
    int high = S*S;


    while ( low < high)
    {
        flag = 0;

        for(i = 2; i <= low/2; ++i)
        {
            if(low % i == 0)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
           vec.push_back(low);
        ++low;
    }

    for (int i = 0; i < S; i++)
    {
        cout << vec[i]<< " ";
    }
}



int main()
{
    f(S);
    return 0;
}
