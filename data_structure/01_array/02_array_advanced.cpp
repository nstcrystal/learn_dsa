#include <bits/stdc++.h>
using namespace std;

// ============================================================================
// 02 - Array nâng cao (Mảng động)
// ============================================================================
// Nội dung:
//   1. Khai báo & khởi tạo mảng động (Vector)
//   2. Truy cập, duyệt mảng
//   3. Thao tác cơ bản: thêm, xóa, chèn
//
// Đặc điểm Array:
//   - Lưu liên tiếp trong RAM, truy cập O(1) qua index
//   - Mảng động: Tự tăng kích thước, nên dùng trong phỏng vấn
//
// Độ phức tạp:
//   - Truy cập a[i]:   O(1)
//   - Duyệt:           O(n)
//   - Chèn/xóa cuối:   O(1) trung bình
//   - Chèn/xóa giữa:   O(n)
// ============================================================================


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);


    // --- 1. Khai báo và khởi tạo ---
    cout << "=== 1. Khai bao ===\n";

    vector<int> v = {1, 2, 3, 4, 5};        // vector
    vector<int> v2(5, 0);                   // vector có 5 phần tử với giá trị 0;
    vector<int> v3;                         // vector rỗng
}