#include <bits/stdc++.h>
using namespace std;
#define ll long long

const ll N = 100000000;

vector<bool> sieve(N + 1, true);

void createSieve()
{
    for (ll i = 2; i * i <= N; i++)
    {
        if (sieve[i])
        {
            for (ll j = i * i; j <= N; j += i)
            {
                sieve[j] = false;
            }
        }
    }
}

int main()
{
    createSieve();

    vector<ll> primes;
    for (ll i = 2; i <= N; i++)
    {
        if (sieve[i])
        {
            primes.push_back(i);
        }
    }

    for (ll j = 0; j < primes.size(); j += 100)
    {
        cout << primes[j] << "\n";
    }

    return 0;
}
