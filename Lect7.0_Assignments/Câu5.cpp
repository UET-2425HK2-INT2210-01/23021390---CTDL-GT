#include<iostream>
using namespace std;


int countNumbers(int n, int count) {
    int r = n / 10;         // loai bo chu so cuoi cung

    if (r == 0) {           // neu chi con mot chu so thi dung lai
        return count;
    }
    return countNumbers(r, count + 1); // tang bien dem va goi de quy tiep
}

int main() {
    int n;
    cin >> n;                         // nhap so nguyen n
    cout << countNumbers(n, 1);      // goi ham de dem so chu so
    return 0;
}