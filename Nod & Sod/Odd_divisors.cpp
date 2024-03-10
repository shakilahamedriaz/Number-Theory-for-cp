#include<bits/stdc++.h>
using namespace std;



vector<long long> divisor;

void kthDivisor(long long n)
{
    for(long long i=1; i*i<=n; i++)
    {
        if(n%i==0)
        {
            divisor.push_back(i);

            if(n/i !=i)
            {
                divisor.push_back(n/i);
            }
        }
    }

    sort(divisor.begin(), divisor.end());
}

int main()
{
    long long n;
    cin >>n;

    kthDivisor(n);
   
    for(int i=0; i<divisor.size(); i++)
    {
       if(divisor[i]%2==1)
       {
           cout<<divisor[i] <<endl;
       }
    }
    return 0;
}