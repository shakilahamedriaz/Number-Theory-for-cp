#include<iostream>
#include<cmath>
using namespace std;



int  countDivisor(long long n)
{

    long long cnt=0;
    for(long long i=1; i*i<=n; i++)
    {
       if(n%i==0)
       {
          cnt ++;

          if(i!=n/i)
          {
              cnt++;
          }
       }
    }

    return cnt;
}

int main()
{

     int t;
     cin >>t;
     while(t--)
     {
        long long n;
        cin >>n;

       cout<< countDivisor(n) <<endl;

     }

    return 0;
}