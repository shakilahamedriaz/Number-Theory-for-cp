#include<bits/stdc++.h>
using namespace std;
#define ll long long


int ans(ll a, ll b)
{
    ll ans = 1;

    for(ll i=2; i<=min(a,b); i++)
    {
        ans *= i;
    }   

    return ans; 
}
int main()
{
    ll a,b;
    cin>>a>>b;
    
    cout<<ans(a,b)<<endl;
}
