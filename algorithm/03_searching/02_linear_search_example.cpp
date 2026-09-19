#include <bits/stdc++.h>
using namespace std;

// ============================================================================
// Linear Search - Ví dụ mở rộng & Ứng dụng
// ============================================================================
// File này minh họa các biến thể thực tế của Linear Search:
//   1. Tìm kiếm trên vector struct (ví dụ: danh sách sinh viên)
//   2. Sentinel Linear Search (tối ưu: giảm 1 phép so sánh mỗi vòng lặp)
//   3. Tìm max/min bằng linear scan (bản chất cũng là linear search)
//   4. Đếm số lần xuất hiện
//
// Time:  O(n) cho mọi biến thể
// Space: O(1) (trừ trường hợp lưu kết quả)
// ============================================================================

struct Student {
    int id;
    string name;
    double gpa;
};

// 1. Tìm sinh viên theo id (linear search trên vector<Student>)
int findStudentById(const vector<Student>& list, int targetId) {
    for (int i = 0; i < (int)list.size(); i++) {
        if (list[i].id == targetId) return i;
    }
    return -1;
}

// 2. Sentinel Linear Search - kỹ thuật tối ưu nhỏ
//    Đặt target ở cuối mảng làm lính canh, chỉ cần 1 điều kiện trong loop.
//    Lưu ý: cần copy mảng hoặc đảm bảo có thể ghi đè phần tử cuối tạm thời.
int sentinelSearch(vector<int>& a, int target) {
    int n = a.size();
    if (n == 0) return -1;
    int last = a[n - 1];
    a[n - 1] = target; // đặt lính canh

    int i = 0;
    while (a[i] != target) i++;

    a[n - 1] = last; // khôi phục

    // Kiểm tra: nếu i < n-1 thì tìm thấy trước lính canh
    // nếu i == n-1 thì phải check xem phần tử cuối gốc có == target không
    if (i < n - 1) return i;
    if (last == target) return n - 1;
    return -1;
}

// 3. Tìm chỉ số phần tử lớn nhất / nhỏ nhất (linear scan)
int findMaxIndex(const vector<int>& a) {
    if (a.empty()) return -1;
    int maxIdx = 0;
    for (int i = 1; i < (int)a.size(); i++) {
        if (a[i] > a[maxIdx]) maxIdx = i;
    }
    return maxIdx;
}

// 4. Đếm số lần xuất hiện
int countOccurrences(const vector<int>& a, int target) {
    int cnt = 0;
    for (int x : a) if (x == target) cnt++;
    return cnt;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // --- Ví dụ 1: Tìm kiếm struct ---
    cout << "=== Vi du 1: Tim sinh vien theo ID ===\n";
    vector<Student> students = {
        {101, "An", 3.2},
        {102, "Binh", 3.8},
        {103, "Chi", 3.5},
        {104, "Dung", 3.9}
    };
    int searchId = 103;
    int idx = findStudentById(students, searchId);
    if (idx != -1)
        cout << "Tim thay ID " << searchId << ": " << students[idx].name
             << " (GPA " << students[idx].gpa << ") tai index " << idx << "\n";
    else
        cout << "Khong tim thay ID " << searchId << "\n";

    searchId = 999;
    idx = findStudentById(students, searchId);
    cout << "Tim ID " << searchId << ": " << (idx == -1 ? "khong tim thay (-1)" : to_string(idx)) << "\n";

    // --- Ví dụ 2: Sentinel Search ---
    cout << "\n=== Vi du 2: Sentinel Linear Search ===\n";
    vector<int> a = {5, 3, 8, 1, 9, 2};
    cout << "Mang: ";
    for (int x : a) cout << x << " ";
    cout << "\n";
    // Copy để giữ nguyên mảng gốc khi demo
    vector<int> b = a;
    cout << "sentinelSearch(b, 8) = " << sentinelSearch(b, 8) << "\n";
    b = a;
    cout << "sentinelSearch(b, 7) = " << sentinelSearch(b, 7) << " (khong ton tai)\n";
    b = a;
    cout << "sentinelSearch(b, 2) = " << sentinelSearch(b, 2) << " (phan tu cuoi)\n";

    // --- Ví dụ 3: Tìm max ---
    cout << "\n=== Vi du 3: Tim phan tu lon nhat (linear scan) ===\n";
    vector<int> c = {4, 9, 2, 15, 7, 15, 3};
    cout << "Mang: ";
    for (int x : c) cout << x << " ";
    cout << "\n";
    int maxIdx = findMaxIndex(c);
    cout << "Max = " << c[maxIdx] << " tai index " << maxIdx << "\n";
    cout << "So lan xuat hien cua 15: " << countOccurrences(c, 15) << "\n";
    cout << "So lan xuat hien cua 100: " << countOccurrences(c, 100) << "\n";

    // --- Ví dụ 4: So sánh với std::find (STL) ---
    cout << "\n=== Vi du 4: Dung STL std::find (ban chat van la linear search) ===\n";
    vector<int> d = {10, 20, 30, 40};
    auto it = find(d.begin(), d.end(), 30);
    if (it != d.end())
        cout << "std::find thay 30 tai index " << (it - d.begin()) << "\n";
    else
        cout << "std::find khong thay\n";

    // find_if với điều kiện phức tạp: tìm số chẵn đầu tiên
    auto it2 = find_if(d.begin(), d.end(), [](int x) { return x % 2 == 0; });
    if (it2 != d.end())
        cout << "find_if so chan dau tien: " << *it2 << " tai index " << (it2 - d.begin()) << "\n";

    return 0;
}
