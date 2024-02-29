#include<bits/stdc++.h>
using namespace std;

void phi(int n)
{
   // first, we will find the prime factors of n
   // and then we will use the formula to find the phi(n)
     int ans=n;
     
    for(int i=2; i*i<=n; i++)
    {
        if(n%i == 0)
        {
            int pow=0;
            while(n%i == 0)
            {
                n/=i;
                pow++;
            }

            //cout<<i<< "^" <<pow<< " ";
           
           ans*=(i-1);
           ans/=i;

        }
    }
    
    if(n>1)
    {
        //cout<<n<< "^"<<1<<endl;
        ans*=(n-1);
        ans/=n;
    }
    
    cout<<ans<<endl;
}

int main()
{
    int n;
    cin >>n;

    phi(n);

    return 0;
}