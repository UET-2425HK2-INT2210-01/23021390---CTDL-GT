#include <iostream>
using namespace std;

// Hàm phân vùng Hoare
int partition(int arr[], int low, int high) {
    int pivot = arr[low];   // Chọn pivot là phần tử đầu tiên
    int left = low + 1;     // Con trỏ trái bắt đầu sau pivot
    int right = high;       // Con trỏ phải bắt đầu từ cuối mảng

    while (true) {
        // Tăng left đến khi gặp phần tử lớn hơn pivot
        while (left <= high && arr[left] <= pivot) {
            left++;
        }

        // Giảm right đến khi gặp phần tử nhỏ hơn hoặc bằng pivot
        while (right >= low && arr[right] > pivot) {
            right--;
        }

        // Nếu con trỏ trái vượt con trỏ phải thì thoát vòng lặp
        if (left > right) {
            break;
        }

        // Hoán đổi phần tử ở left và right
        swap(arr[left], arr[right]);
    }

    // Đưa pivot về đúng vị trí
    swap(arr[low], arr[right]);

    return right; // Trả về chỉ số của pivot sau khi phân vùng
}

// Hàm sắp xếp nhanh QuickSort
void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high); // Lấy vị trí pivot sau phân vùng

        quickSort(arr, low, pi - 1);  // Đệ quy sắp xếp nửa bên trái
        quickSort(arr, pi + 1, high); // Đệ quy sắp xếp nửa bên phải
    }
}


int main() {
    int arr[100];
    int n;

    cin >> n; 

    for (int i = 0; i < n; i++) {
        cin >> arr[i];// Nhập từng phần tử
    }

    quickSort(arr, 0, n - 1); // Gọi hàm quickSort

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
