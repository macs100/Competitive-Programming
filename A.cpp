/**
 * A. Fibonacci army
 * time limit per test: 2 seconds
 * memory limit per test: 256 megabytes
 * 
 * King Cambyses loves Fibonacci numbers. He has several armies. Today he wants to make a new army for himself and he wants the number of men in this army to be the n-th Fibonacci number.
 * Given n you should find n-th Fibonacci number. The set of Fibonacci numbers start with f0 = f1 = 1 and for each i ≥ 2, fi = (f[i - 1] + f[i - 2]).
 * 
 * Input :
 * Input contains a single integer n (1 ≤ n ≤ 20).
 * 
 * Output:
 * Write a single integer. The n-th Fibonacci number.
 */
#include <iostream>
#include <vector>
#define ll long long
using namespace std;

int fibo(int n) {
    vector<ll> fibo(n+1); 
    fibo[0] = 1;
    fibo[1] = 1;
    for (int i = 2; i <= n; i++) {
        fibo[i] = fibo[i-1] + fibo[i-2];
    }
    return fibo[n];
}

int main() {

    int n;
    cin>>n;
    
    cout<<fibo(n);

    return 0;
}
