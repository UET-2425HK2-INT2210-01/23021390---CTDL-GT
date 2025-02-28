#include <iostream>
using namespace std;

int main() {
    double num, minNum, maxNum;
    cin >> num;
    minNum = maxNum = num;
    
    for (int i = 1; i < 5; i++) {
        cin >> num;
        if (num < minNum) minNum = num;
        if (num > maxNum) maxNum = num;
    }
    
    cout << minNum + maxNum << endl;
    
    return 0;
}
