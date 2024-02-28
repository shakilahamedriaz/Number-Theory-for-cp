#include<bits/stdc++.h>
using namespace std;

bool sieve[1000001];

void createsieve(int N)
{
    for(int i=2; i<=N; i++)
    {
        sieve[i] = true;
    }
    
    for(int i=2; i*i<=N; i++)  //i*i is used instead of i, because the previous multiple of i is already marked by the previous i.
    {
        if(sieve[i] == true)
        {
            for(int j=i*i; j<=N; j+=i)  // here i*i means the next multiple of i, because the previous multiple of i is already marked by the previous i.
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
