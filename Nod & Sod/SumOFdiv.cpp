#include<bits/stdc++.h>
using namespace std;
#define ll long long

int sumofDiv(int n)
{

    if(n==1) return 0;

    else
    {
        ll sum=1;

        for(int i=2; i*i<=n; i++)
        {
            if(n%i==0)
            {
                if(n/i == i) sum+=i;
                else
                {
                    sum+=i;
                    sum+=n/i;
                }
            }
        }

        return sum;
    }

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
