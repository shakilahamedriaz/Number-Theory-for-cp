#include<bits/stdc++.h>
using namespace std;

int sumOfDivisors(int n)
{
    long long sum = 0;

    for(int i = 1; i * i < n; i++)
    {
        if(n % i == 0)
        {
            sum += i;
            sum+=n/i;
        }


    }

    return sum-n;
}

int main()
{
    int t;
    scanf("%d", &t);

    while(t--)
    {
        int n;
        scanf("%d", &n);

        printf("%d\n", sumOfDivisors(n));
    }

    return 0;
}
