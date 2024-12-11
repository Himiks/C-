#include <iostream>
#include <vector>
using namespace std;

const long long MAX_VAL = 1e18;  // Maximum possible value of a_i

// Precompute factorials up to the largest that fits in 10^18
vector<long long> factorials;

// Function to compute factorials and store them in the factorials vector
void precomputeFactorials() {
    long long fact = 1;
    factorials.push_back(fact);  // 1! = 1
    for (int i = 2; ; ++i) {
        fact *= i;
        if (fact > MAX_VAL) break;  // Stop if the factorial exceeds 10^18
        factorials.push_back(fact);
    }
}

// Recursive function to check if a number can be expressed as a product of factorials
bool isProfact(long long num, int idx) {
    if (num == 1) return true;  // If the number reduces to 1, it's a profact
    if (idx <= 0 || num < 1) return false;  // Out of factorials or number becomes less than 1

    // Try including the current factorial in the product
    if (num % factorials[idx] == 0) {
        if (isProfact(num / factorials[idx], idx)) return true;  // Include current factorial and recurse
    }
    // Try excluding the current factorial and move to the next
    return isProfact(num, idx - 1);
}

int main() {
    precomputeFactorials();  // Precompute factorials

    int n;
    cin >> n;  // Number of bills

    for (int i = 0; i < n; ++i) {
        long long a;
        cin >> a;  // Read the cost on each bill

        if (isProfact(a, factorials.size() - 1)) {
            cout << "YES\n";
        }
        else {
            cout << "NO\n";
        }
    }

    return 0;
}
