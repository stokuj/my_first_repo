#include <iostream>

using namespace std;

void lew(int N, int k)
{
    for (int i = 0; i < k; i++)
    {

        cout << "X"<<".";
    }
}

void sro1(int N,int k)
{
    for (int i = 0; i < N-k*4; i++)
    {

        cout << "X";
    }

}

void sro2(int N,int k)
{
    for (int i = 0; i < N-k*4; i++)
    {

        cout << ".";
    }

}
void pra(int N, int k)
{
    for (int i = 0; i < k; i++)
    {

        cout << "."<<"X";
    }
}

int main()
{
    int N;
    int k = 0;    // Counts from 0 to (n/4)-1 and back to 0
    int test = 1; // if == 2 program is ready to change order or increment k (every two rows)
    bool rew = 0; // if == 1 rewerser rows
    cout << "Enter N: ";
    cin >> N ;


    for ( int i = 1; i <= N; i++)
    {

        // forward
        if (( i%2 == 1) && (rew == 0))
        {
            lew(N,k);
            sro1(N,k);
            pra(N,k);
            cout <<"    "<< k<< i;;
        }
        if (( i%2 == 0) && (rew == 0))
        {

            lew(N,k);
            sro2(N,k);
            pra(N,k);
            cout <<"    "<< k<< i;;
        }
        // rewerse
        if (( i%2 == 0) && (rew == 1))
        {

            lew(N,k);
            sro1(N,k);
            pra(N,k);
            cout <<"    "<< k<< i;;
        }
        if (( i%2 == 1) && (rew == 1))
        {
            lew(N,k);
            sro2(N,k);
            pra(N,k);
            cout <<"    "<< k<< i;;
        }

        test++;

        // do forward
        if ( i < N/2)
        {
            if (test == 2)
            {
                k++;
                test = 0;
            }
        }
        //rewerse and do once forward
        if ( i == N/2)
        {
            if (test == 2)
            {

                rew = 1;
                test = 0;
            }
        }

        // back after rewerse
        if ( i > N/2)
        {
            if (test == 2)
            {

                k--;
                test = 0;
            }
        }
        cout<<endl;

    }


    return 0;
}
