#include<bits/stdc++.h>
using namespace std;
#define ll long long

int sumofDiv(ll n)
{
   ll sum=0;
   for(ll i=1; i*i<=n; i++)
   {

      if(i*i==n)
      {
          sum+=i;
      }
      else if(n%i==0)
      {
          sum+=i;
          sum+=n/i;
      }

   }
  return sum-n;

}

int main()
{
   ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
   ll t;
   cin >>t;

   while(t--)
   {


   ll n;
   cin >>n;
   cout<<sumofDiv(n)<<endl;

   }

   return 0;
}

