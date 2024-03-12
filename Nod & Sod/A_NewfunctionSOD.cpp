#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll sumofDiv(ll n)
{
    ll sum=0;

    for(ll i=1; i*i<=n; i++)
    {
        if(i*i == n)
        {
            sum+=i;
        }
        else if(n%i == 0)
        {
            sum+=i;
            sum+=n/i;
        }
    }
    return sum-n;
}

int main()
{
    int t;
    cin >>t;

    while(t--)
    {
        ll n;
        cin >>n;
        ll ans=sumofDiv(n);

        cout<<ans<<endl;
    }

    return 0;
}