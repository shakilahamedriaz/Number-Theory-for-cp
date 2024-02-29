#include <bits/stdc++.h>
using namespace std;

int N = 1000000;
bool sieve[1000000 + 1];

void createsieve()
{
    for (int i = 2; i <= N; i++)
    {
        sieve[i] = true;
    }

    for (int i = 2; i * i <= N; i++)
    {
        if (sieve[i] == true)
        {
            for (int j = i * i; j <= N; j++)
            {
                sieve[j] = false;
            }
        }
    }
}

vector<int> generatePrimes(int N)
{
    vector<int> ds;

    for (int i = 2; i <= N; i++)
    {
        if (sieve[i] == true)
        {
            ds.push_back(i);
        }
    }

    return ds;
}

int main()
{
    createsieve();
    int t;
    cin >> t;

    while (t--)
    {
        int l, r;
        cin >> l >> r;

        // Step 1: generate all primes till sqrt(r);
        vector<int> primes = generatePrimes(sqrt(r));

        // Step 2: create a dummy array of size[r-l+1] and initialize everyone as 1;
        int dummy[r - l + 1];
        for (int i = 0; i < r - l + 1; i++)
        {
            dummy[i] = 1;
        }

        // Step 3: for all prime numbers, mark their multiples as false
        for (auto pr : primes)
        {
            int firstMultiple = max(pr * pr, (l / pr) * pr);
            if (firstMultiple < l)
                firstMultiple += pr;

            for (int j = max(firstMultiple, pr * pr); j <= r; j += pr)
            {
                dummy[j - l] = 0;
            }
        }

        // Step 4: print the primes
        for (int i = max(l, 2); i <= r; i++)
        {
            if (dummy[i - l] == 1)
            {
                cout << i << " ";
            }
        }

        cout << endl;
    }

    return 0;
}
