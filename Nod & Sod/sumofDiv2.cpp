#include<bits/stdc++.h>
using namespace std;
#define ll long long

int sumofDiv(int n)
{
   ll sum=0;
   for(int i=1; i*i<=n; i++)
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
   int t;
   cin >>t;

   while(t--)
   {


   int n;
   cin >>n;
   cout<<sumofDiv(n)<<endl;

   }

   return 0;
}

