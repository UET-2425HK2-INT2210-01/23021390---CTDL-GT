#include<iostream>
using namespace std;


int reverseNumbers(int n, int revNum) {
    if (n == 0) {                     // khi khong con chu so nao thi tra ve so dao nguoc
        return revNum;
    }
    return reverseNumbers(n / 10, revNum * 10 + (n % 10));
    // lay chu so cuoi them vao revNum va goi de quy voi n/10
}

int main() {
    int n;
    cin >> n;                          // nhap so nguyen n
    cout << reverseNumbers(n, 0);     // dao nguoc n bat dau tu revNum = 0
    return 0;
}