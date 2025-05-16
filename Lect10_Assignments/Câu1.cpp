#include<iostream>
#include<vector>

using namespace std;

const int N = 1000; 
vector<int> adj[N]; // tạo danh sách kề

bool visited[N]; // tạo mảng đánh dấu các đỉnh đã duyệt 

void DFS(int node) {
    visited[node] = true; // đánh dấu cạnh hiện tại đã duyệt
    for(int neighbor : adj[node]) { //sử dụng vòng lặp for-each để gắn giá trị của các đỉnh kề vào biến neighbor
        if(!visited[neighbor]) { // nếu đỉnh kề chưa được duyệt
            DFS(neighbor); // gọi đệ quy để duyệt đỉnh kề
        }
    }
}

int main() {
    int n, m; // n là các node , m là các đỉnh
    cin >> n >> m;

    for(int i = 0; i < m; i++){
        int x, y; // x là đỉnh đầu , y là đỉnh cuối
        cin >> x >> y; 
        adj[x].push_back(y); // thêm đỉnh y vào danh sách kề của đỉnh x
        adj[y].push_back(x); // thêm đỉnh x vào danh sách kề của đỉnh y
    }

    int connectedComponents = 0;
    for(int i = 1; i <= n; i++) { // duyệt từ 1 đến n
        if(!visited[i]) { // nếu đỉnh chưa được duyệt
            DFS(i); // gọi hàm DFS để duyệt đỉnh
            connectedComponents++; // tăng số lượng thành phần liên thông
        }
    }

    cout << connectedComponents;

    return 0; 
}