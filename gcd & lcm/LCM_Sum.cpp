#include<bits/stdc++.h>
using namespace std;
#define ll long long

int gcd(int a, int b)
{
    
        if(b ==0 ) return a;
        else gcd(b, a%b);
}

int lcmsum(ll n)
{
    ll sum=0;
    for(ll i=1; i<=n; i++)
    {
       sum+= (i*n)/gcd(i, n);
    }
    return sum;
}

int main()
{

    ll t;
    cin >>t;

    while(t--)
    {

    ll n;
    cin >>n;
    cout<<lcmsum(n);

    }

    return 0;
}