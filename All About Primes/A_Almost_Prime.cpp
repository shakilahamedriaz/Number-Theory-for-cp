#include <bits/stdc++.h>
using namespace std;

// for optimizes GCC code
#pragma GCC optimize("Ofast,unroll-loops")
#pragma GCC target("avx,avx2,fma")

#define ll long long
#define ar array
#define sza(x) ((int)x.size())
#define all(a) (a).begin(), (a).end()
#define PI 3.1415926535897932384626433832795l
#define pb(e) push_back(e)
#define fst first
#define snd second
#define pr pair<int, int>
#define mp make_pair
#define flp(i, a, b) for(int i = a; i <= b; i++)
#define sqr(a) (a)*(a)
#define mod 1000000007
#define N "\n"

int gcd(int a, int b) {
    if(a % b == 0) return b;
    else return gcd(b, a % b);
}

int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}

struct Runtime {
    clock_t start;
    Runtime() {
        start = clock();
    }
    ~Runtime() {
        cout << "Runtime: " << fixed << setprecision(3) << (double) (clock() - start) / CLOCKS_PER_SEC << "s\n";
    }
};


void solve() 
{

    int n; 
    cin >> n;
    int ans = 0;

    vector<int>v(n+1, 0);
    
    for(int i=2; i<=n; i++){
        if(v[i] == 0){
            for(int j=i; j<=n; j+=i){
                v[j]++;
            }
        }
        if(v[i] == 2) ans++;
    }

    cout << ans << '\n';    

}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    solve();

    return 0;
}
