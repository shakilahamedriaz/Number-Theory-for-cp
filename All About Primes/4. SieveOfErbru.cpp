#include<bits/stdc++.h>
using namespace std;

bool sieve[1000001];

void createsieve(int N)
{
    for(int i=2; i<=N; i++)
    {
        sieve[i] = true;
    }
    
    for(int i=2; i<=N; i++)
    {
        if(sieve[i] == true)
        {
            for(int j=2*i; j<=N; j+=i)
            {
                sieve[j] = false;
            }
        }
    }
}

int main()
{
    int N = 1000; //000;
    createsieve(N);

    for(int i=2; i<=N; i++)
    {
        if(sieve[i])
        {
            cout << i << " ";
        }
    }
    
    cout << endl;

    return 0;
}
