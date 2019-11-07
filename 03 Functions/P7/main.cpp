#include <iostream>
#include <vector>

using namespace std;



vector <int> vec1{1,  8,  10};
vector <int> vec2{3, 5, 6};

int const S = vec1.size() + vec2.size() ;


void f(vector <int> vec1, vector <int> vec2,int S)
{
    vector <int> vec3(S);
    int a = 0;
    int b = 0;
    for (int i = 0; i < S; i++)
    {
        if ( vec1[a] < vec2[b])
        {

            vec3[i] = vec1[a];
            a++;
        }
        else
        {

            vec3[i] = vec2[b];
            b++;
        }
    }

        for (int i = 0 ; i < S; i++)
    {
        cout << vec3[i] << " " ;
    }
}



int main()
{
    f(vec1,vec2,S);
    return 0;
}
