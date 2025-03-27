#include <iostream>
using namespace std;

// Recursive function that returns the sum from 1 to n
int recursive_sum(int n) {
    if (n == 0)
        return 0;
    return n + recursive_sum(n - 1);
}

// Helper function used by the overloaded version of recursive_sum()
int recursive_sum_helper(int n) {
    if (n == 0)
        return 0;
    return n + recursive_sum_helper(n - 1);
}

// Overloaded version of recursive_sum()
int recursive_sum() {
    int n;
    cout << "Enter a number (n): ";
    cin >> n;
    return n + recursive_sum_helper(n - 1);
}

int main() {
    // First test: using the parameterized version
    cout << "Test: recursive_sum(n)" << endl;
    int n1;
    cout << "Enter n1: ";
    cin >> n1;
    cout << "Sum from 1 to " << n1 << " = " << recursive_sum(n1) << endl;

    // Second test: using the overloaded version
    cout << "\nTest: recursive_sum() [overloaded]" << endl;
    int total = recursive_sum();
    cout << "Sum (overloaded function) = " << total << endl;

    return 0;
}
