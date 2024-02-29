#include<bits/stdc++.h>
using namespace std;



void  countDivisor(long long n)
{
    long long cnt=0;

    for(long long i=1; i*i<=n; i++)
    {
        if(i*i==n)
        {
             cnt+=1;
        }
        else if(n%i==0)
        {
            cnt+=2;
        }
    }

    cout<< cnt <<endl;
}

int main()
{

     int t;
     cin >>t;
     while(t--)
     {
        long long n;
        cin >>n;

        countDivisor(n);

     }

    return 0;
}