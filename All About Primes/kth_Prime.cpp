#include<bits/stdc++.h>
using namespace std;

const int MAX_N = 86028121;  
bool sieve[MAX_N + 1];

void createsieve(int N) {
    for (int i = 2; i <= N; i++) {
        sieve[i] = true;
    }

    for (int i = 2; i * i <= N; i++) {
        if (sieve[i]) {
            for (int j = i * i; j <= N; j += i) {
                sieve[j] = false;
            }
        }
    }
}

int main() {
    int N = MAX_N;
    createsieve(N);

    vector<long long> Prime;
    for (int i = 2; i <= N; i++) {
        if (sieve[i]) {
            Prime.push_back(i);
        }
    }

    long long t;
    cin >> t;

    while (t--) {
        long long k;
        cin >> k;
        cout << Prime[k - 1] << endl;
    }

    return 0;
}
