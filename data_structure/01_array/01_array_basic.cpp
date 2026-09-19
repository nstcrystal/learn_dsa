#include <bits/stdc++.h>
using namespace std;

// ============================================================================
// 01 - Array cơ bản (Mảng tĩnh)
// ============================================================================
// Nội dung:
//   1. Khai báo & khởi tạo mảng tĩnh
//   2. Truy cập, duyệt mảng
//
// Đặc điểm Array:
//   - Lưu liên tiếp trong RAM, truy cập O(1) qua index
//   - Mảng tĩnh: kích thước cố định, cấp phát compile-time
//
// Độ phức tạp:
//   - Truy cập a[i]:   O(1)
//   - Duyệt:           O(n)
// ============================================================================


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // --- 1. Khai báo & khởi tạo ---
    cout << "=== 1. Khai bao ===\n";
    int arr[5] = {1, 2, 3, 4, 5};          // mảng tĩnh, size cố định

    cout << "arr[2] = " << arr[2] << "\n";


    // --- 2. Duyệt mảng ---
    cout << "\n=== 2. Duyet mang ===\n";

    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "for index: ";

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    } 

    cout << "\nfor range: ";

    for (int x : arr) {
        cout << x << " ";
    } 


    // --- 3. Mảng 2 chiều (matrix) ---
    cout << "\n=== 3. Mang 2 chieu ===\n";

    int mat[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    cout << "matrix 3x3:\n";

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << mat[i][j] << " ";
        }

        cout << "\n";
    }

    cout << "mat[1][2] = " << mat[1][2] << "\n";

    return 0;
}
