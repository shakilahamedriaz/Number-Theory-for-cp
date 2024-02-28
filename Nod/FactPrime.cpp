#include <bits/stdc++.h>
using namespace std;

void primeFactorization(long long n)
{
    for (long long i = 2; i * i <= n; i++)
    {
        long long power = 0;
        if (n % i == 0)
        {
            while (n % i == 0)
            {
                n /= i;
                power++;
            }

            cout << i << "^" << power << " ";
        }
    }

    if (n > 1)
    {
        cout << n << "^1 "; 
    }

    cout << endl; 
}

int main()
{
    long long n;

    while (true)
    {
        cin >> n;
        if (n == 0)
        {
            break;
        }

        primeFactorization(n);
    }

    return 0;
}
