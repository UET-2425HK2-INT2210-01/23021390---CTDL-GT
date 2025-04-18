#include<iostream>
using namespace std;


int sum(int n) {
    if (n == 1) {           // dieu kien dung: neu n = 1 thi tra ve 1
        return 1;
    }
    return n + sum(n - 1);  // cong n voi tong cua (n - 1)
}

int main() {
    int n;
    cin >> n;               // nhap gia tri n
    cout << sum(n);         // in ra tong tu 1 den n
    return 0;
}