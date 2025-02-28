#include <iostream>
using namespace std;
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int m, n;
    cin >> m >> n;
    if (m <= 0 || n <= 0) {
        return 1;
    }
    cout << gcd(m, n) << endl;
    
    return 0;
}
