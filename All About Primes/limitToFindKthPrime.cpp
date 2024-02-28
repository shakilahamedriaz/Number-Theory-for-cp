#include<bits/stdc++.h>
using namespace std;

const int N = 100000000;  
bool sieve[N + 1];
vector<long long> Prime;

void createsieve() 
{

    for (int i = 2; i <= N; i++) {
        sieve[i] = true;
    }

    for (int i = 2; i * i <= N; i++) {
        if (sieve[i] == true) 
        {
            for (int j = i * i; j <= N; j += i) 
            {
                sieve[j] = false;
            }
        }
    }

   
    // for (int i = 2; i <= N; i++) 
    // {
    //     if (sieve[i] == true) 
    //     {
    //         Prime.push_back(i);
    //     }
    // }

    int limit= 5*1000000;
    int cnt=0;
    int size=1;

    for(int i=2;; i++)
    {
        if(sieve[i]== true)
        {
            cnt++;
        }

        if(cnt == limit)
        {
            size=i;
            break;
        }
    }
    
    cout<< "the mx size : "<<endl;
    cout<<size<<endl; //loop will run this range.
}

int main() {

    createsieve();

    // int t;
    // cin >>t;

    // while (t--) {
    //     long long k;
    //     cin >> k;
    //     cout << Prime[k - 1] << endl;
    // }

    return 0;
}
