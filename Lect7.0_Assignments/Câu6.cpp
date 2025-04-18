#include<iostream>
using namespace std;


int sumNumbers(int n) {
    if (n == 0) {              // khi het chu so thi tra ve 0
        return 0;
    }
    return (n % 10) + sumNumbers(n / 10);  // lay chu so cuoi + goi de quy phan con lai
}

int main() {
    int n;
    cin >> n;                  // nhap so nguyen n
    cout << sumNumbers(n);     // in ra tong cac chu so
    return 0;
}