#include <bits/stdc++.h>
using namespace std;

bool isPossible(long long n) {
    if (n == 1) {
        return true;
    }

    vector<long long> digits;
    

    for (long long i = 2; i * i <= n; i++)
     {
        while (n % i == 0) {
            n /= i;
            digits.push_back(i);
        }
    }
    
    if (n > 1) {
        digits.push_back(n);
    }


    long long m = 1;
    for (long long it: digits) {
        if (it > 9) {
            return false;
        }
        m *= it;
    }

    return true;
}

int main() {
    long long t;
    cin >> t;

    while (t--) {
        long long n;
        cin >> n;

        if (isPossible(n)) {
            cout << "yes" << endl;
        } else {
            cout << "no" << endl;
        }
    }

    return 0;
}
