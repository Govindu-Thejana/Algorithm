#include <iostream>
#include <unordered_map>
#include <chrono>
using namespace std;

int fib_mem(int n, unordered_map<int, int>& mem) {
    if (mem.find(n) != mem.end()) {
        return mem[n];
    }
    if (n == 0 || n == 1) {
        return n;
    }
    mem[n] = fib_mem(n - 1, mem) + fib_mem(n - 2, mem);
    return mem[n];
}

int fib_tab(int n) {
    int fib[2] = { 0, 1 };
    for (int i = 2; i <= n; ++i) {
        fib[i % 2] = fib[0] + fib[1];
    }
    return fib[n % 2];
}

int fib_recursive(int n) {
    if (n == 0 || n == 1) {
        return n;
    }
    return fib_recursive(n - 1) + fib_recursive(n - 2);
}

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    auto t0 = chrono::high_resolution_clock::now();
    unordered_map<int, int> mem;
    cout << "Fibonacci using memoization: " << fib_mem(n, mem) << endl;
    auto t1 = chrono::high_resolution_clock::now();
    cout << "Time taken for memoization: " << chrono::duration_cast<chrono::microseconds>(t1 - t0).count() << " microseconds" << endl;

    t0 = chrono::high_resolution_clock::now();
    cout << "Fibonacci using tabulation: " << fib_tab(n) << endl;
    t1 = chrono::high_resolution_clock::now();
    cout << "Time taken for tabulation: " << chrono::duration_cast<chrono::microseconds>(t1 - t0).count() << " microseconds" << endl;

    t0 = chrono::high_resolution_clock::now();
    cout << "Fibonacci using recursion: " << fib_recursive(n) << endl;
    t1 = chrono::high_resolution_clock::now();
    cout << "Time taken for recursion: " << chrono::duration_cast<chrono::microseconds>(t1 - t0).count() << " microseconds" << endl;

    return 0;
}
