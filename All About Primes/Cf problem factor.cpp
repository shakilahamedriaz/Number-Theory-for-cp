#include<bits/stdc++.h>
using namespace std;


int main()
{
   int t;
   cin >>t;
   while(t--)
   {

   int n;
   cin >>n;
   int a=1, b=1, c=1;

   for(int i=2; i*i<=n; i++)
   {
     if(n%i == 0)
     {
        a=i;
        break;
     }
   }

  n=n/a;

    for(int i=2; i*i<=n; i++)
    {
         if(n%i == 0)
        {
             if(i!=a)   //divisor should be distinct from a
            {
              b = i;       
              c = n/i;    //c automatically will be n/ab
              break;
            }
        }
    }

    if(a!=b && b!=c && c>1)
    {
        cout<< "YES"<<endl;
        cout<<a<< " "<<b<< " "<<c<<endl;
    }
    else
    {
        cout<< "NO"<<endl;
    }

   }

    return 0;
}
