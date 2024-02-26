#include<bits/stdc++.h>
using namespace std;
#define ll long long

void isPrime(ll n)
{
    ll cnt = 0;
    for(ll i=1; i<=n; i++)
    {
        if(n%i == 0)
        {
            cnt++;
        }
    }
    if(cnt == 2)
    {
        cout<< "Prime number"<<endl;
    }
    else
    {
        cout<< "Not Prime number"<<endl;
    }
}

int main()
{
    ll n;
    cin >>n;

    isPrime(n);

    return 0;
}