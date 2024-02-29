#include<bits/stdc++.h>
using namespace std;
#define ll long long

int gcd(int a, int b)
{
        if(b == 0 ) return a;
        else
            return gcd(b, a%b);
}

int main()
{

    int n;
    while(true)
    {
        cin >>n;
        if(n==0) break;


        long long G = 0;

            for (int i = 1; i < n; i++) {
            for (int j = i + 1; j <= n; j++) {
                G += gcd(i, j);
            }
        }

        cout << G << endl;
    }


    return 0;
}



