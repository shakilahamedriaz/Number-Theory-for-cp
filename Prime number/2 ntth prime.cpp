#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n)
{
    if(n<2) return false;
    for(int i=2; i*i<=n; i++)
    {
        if(n%i == 0)
        {
            return false;
        }
    }
    return true;
}

vector<int>getPrime(int n)
{
    vector<int> Prime;
    for(int i=2; i<=n; i++)
    {
        if( isPrime(i) )
        {
           Prime.push_back(i);
        }
    }

    return Prime;
}

int main()
{

     int n;
     cin >>n;

    vector<int> Prime = getPrime(n);
    //print all prime
    for(int i=0; i<Prime.size(); i++)
    {
        cout<< Prime[i] << " ";
    }


    return 0;
}