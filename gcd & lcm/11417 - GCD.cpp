#include<iostream>
using namespace std;

int GCD(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int N;

    while (true) {
        cin >> N;

        if (N == 0) {
            break; // Terminate the program when N is 0
        }

        int G = 0;

        for (int i = 1; i < N; i++) {
            for (int j = i + 1; j <= N; j++) {
                G += GCD(i, j);
            }
        }

        cout << G << endl;
    }

    return 0;
}
