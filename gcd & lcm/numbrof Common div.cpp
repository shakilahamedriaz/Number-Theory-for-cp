#include <iostream>
#include <cmath>

// Function to calculate the number of divisors of a number
int countDivisors(int n) {
    int divisors = 0;
    for (int i = 1; i <= sqrt(n); ++i) {
        if (n % i == 0) {
            // If both divisors are the same, count only one
            if (n / i == i)
                divisors++;
            else
                // Otherwise, count both divisors
                divisors += 2;
        }
    }
    return divisors;
}

// Function to calculate the GCD of two numbers
int gcd(int a, int b) {
    while (b) {
        a = a % b;
        std::swap(a, b);
    }
    return a;
}

// Main function to solve the problem
void commonDivisors(int t, std::pair<int, int>* pairs) {
    for (int i = 0; i < t; ++i) {
        int a = pairs[i].first;
        int b = pairs[i].second;
        
        // Calculate GCD
        int commonDivisor = gcd(a, b);
        
        // Count divisors of the GCD
        int result = countDivisors(commonDivisor);
        std::cout << result << std::endl;
    }
}

int main() {
    int t;
    std::cin >> t;

    std::pair<int, int>* pairs = new std::pair<int, int>[t];
    for (int i = 0; i < t; ++i) {
        std::cin >> pairs[i].first >> pairs[i].second;
    }

    // Output
    commonDivisors(t, pairs);

    delete[] pairs;
    return 0;
}
