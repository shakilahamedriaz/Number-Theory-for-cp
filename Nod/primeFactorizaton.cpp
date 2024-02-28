#include <bits/stdc++.h>
using namespace std;


int  primeFactorization(long long  n)
{

    map<long long, long long> mp;

    for (long long  i = 2; i*i <= n; i++)
    {
        if (n % i == 0)
        {
            while (n % i == 0)
            {
                n /= i;
                 mp[i]++;
            }
        }
    }

    for(auto it: mp)
    {

        cout<<it.first<< "^"<<it.second<< " ";
    }
}

int main()
{
    long long  n;
    cin >> n;

    primeFactorization(n);

    return 0;
}
