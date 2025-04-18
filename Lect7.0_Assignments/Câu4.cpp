#include<iostream>
using namespace std;


int luyThua(int x, int n) {
    if (n == 0) {           // x^0 = 1
        return 1;
    }
    return x * luyThua(x, n - 1); // x^n = x * x^(n-1)
}

int main() {
    int x, n;
    cin >> x >> n;          // nhap x va n
    cout << luyThua(x, n);  // in ra x^n
    return 0;
}