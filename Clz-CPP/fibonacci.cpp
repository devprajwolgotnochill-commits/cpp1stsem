#include <iostream>
using namespace std;

// Recursive function
int fib(int n) {
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else
        return fib(n-1) + fib(n-2);
}

int main() {
    int n = 10; //five Fibonacci Series:

    cout << "Fibonacci Series: ";
    for (int i = 0; i < n; i++) {
        cout << fib(i) << " ";
    }
    return 0;
}
