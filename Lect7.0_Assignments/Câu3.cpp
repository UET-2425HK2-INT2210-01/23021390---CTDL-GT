#include<iostream>
using namespace std;


int fibonacci(int n) {
    if (n == 0) {           // so thu 0 la 0
        return 0;
    }
    if (n == 1) {           // so thu 1 la 1
        return 1;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);  // cong hai so truoc do
}

int main() {
    int n;
    cin >> n;               // nhap n
    cout << fibonacci(n);   // in ra so Fibonacci thu n
    return 0;
}