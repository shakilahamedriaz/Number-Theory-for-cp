#include <bits/stdc++.h>
using namespace std;
#define ll long long

int comdiv(ll n)
{
    ll cnt = 0;
    for (ll i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            if (n / i == i)
            {
                cnt++;
            }
            else
            {
                cnt += 2;
            }
        }
    }

    return cnt;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ll t;
    scanf("%lld", &t);

    while (t--)
    {
        ll a, b;
        scanf("%lld %lld", &a, &b);

        ll ans = abs(a - b);

        cout << comdiv(ans) << endl;
    }

    return 0;
}
