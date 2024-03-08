#include<bits/stdc++.h>
using namespace std;

const int max=100000;

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
    long long n, k;
    cin >>n >>k;

    kthDivisor(n);

    if(divisor.size()< k)
    {
        cout<< "-1" <<endl;
    }
    else
    {
        cout<<divisor[k-1]<<endl;
    }
    return 0;
}