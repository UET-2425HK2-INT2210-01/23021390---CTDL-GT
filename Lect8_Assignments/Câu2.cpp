#include <iostream>
using namespace std;

// Hàm merge: gộp hai mảng con đã được sắp xếp thành một mảng đã sắp xếp
void merge(int arr[], int left, int mid, int right) {
    int n1 = mid - left + 1; // Số phần tử của mảng bên trái
    int n2 = right - mid;    // Số phần tử của mảng bên phải

    int L[100], R[100]; // tạo 2 mảng tạm thời để lưu 2 nửa của mảng ban đầu

    // Sao chép dữ liệu vào mảng tạm L
    for (int i = 0; i < n1; i++)
        L[i] = arr[left + i];

    // Sao chép dữ liệu vào mảng tạm R
    for (int j = 0; j < n2; j++)
        R[j] = arr[mid + 1 + j];

    // Gộp hai mảng L và R lại vào mảng chính arr
    int i = 0, j = 0, k = left; // i, j là chỉ số của L và R; k là chỉ số trong mảng arr

    while (i < n1 && j < n2) {
        if (L[i] <= R[j])       // Nếu phần tử bên trái nhỏ hơn hoặc bằng bên phải
            arr[k++] = L[i++];  // Gán phần tử đó vào arr và tăng chỉ số
        else
            arr[k++] = R[j++];  // Ngược lại thì gán phần tử bên phải
    }

    // Sao chép các phần tử còn lại của L (nếu có)
    while (i < n1)
        arr[k++] = L[i++];

    // Sao chép các phần tử còn lại của R (nếu có)
    while (j < n2)
        arr[k++] = R[j++];
}

// Hàm mergeSort: chia nhỏ mảng và sắp xếp đệ quy
void mergeSort(int arr[], int left, int right) {
    if (left < right) {
        int mid = (left + right) / 2; // Tìm chỉ số giữa

        mergeSort(arr, left, mid);      // Gọi đệ quy để sắp xếp nửa bên trái
        mergeSort(arr, mid + 1, right); // Gọi đệ quy để sắp xếp nửa bên phải

        merge(arr, left, mid, right);   // Gộp hai nửa đã sắp xếp
    }
}

int main() {
    int n;
    cin >> n; // Nhập số lượng phần tử mảng

    int a[100]; // Mảng có tối đa 100 phần tử
    for (int i = 0; i < n; i++) {
        cin >> a[i]; // Nhập các phần tử của mảng
    }

    mergeSort(a, 0, n - 1); // Gọi hàm mergeSort để sắp xếp mảng từ chỉ số 0 đến n-1

    for (int i = 0; i < n; i++) {
        cout << a[i] << " "; // In ra mảng sau khi sắp xếp
    }
}
