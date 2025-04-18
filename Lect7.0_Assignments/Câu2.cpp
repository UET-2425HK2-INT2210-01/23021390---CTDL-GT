#include<iostream>
using namespace std;


long long factorial(int n) {
    if (n == 1 || n == 0) {   // neu n = 1 hoac 0 thi giai thua la 1
        return 1;
    }
    return n * factorial(n - 1);  // cong thuc de quy: n! = n * (n-1)!
}

int main() {
    int n;
    cin >> n;                  // nhap n
    cout << factorial(n);      // in ra n!
    return 0;
}