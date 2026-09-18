#include <bits/stdc++.h>
using namespace std;

// ============================================================================
// Linear Search (Tìm kiếm tuyến tính) - Implementation cơ bản
// ============================================================================
// Ý tưởng: Duyệt từng phần tử từ đầu đến cuối, so sánh với target.
//          Gặp phần tử == target -> trả về chỉ số, hết mảng không thấy -> -1.
//
// Time Complexity:  O(n) - worst/average, O(1) - best (phần tử đầu tiên)
// Space Complexity: O(1)
// Ưu điểm: Không yêu cầu mảng sắp xếp, cài đặt đơn giản.
// Nhược điểm: Chậm với n lớn so với Binary Search O(log n).
// ============================================================================

// Tìm kiếm tuyến tính trên vector<int> - trả về chỉ số đầu tiên, -1 nếu không thấy
int linearSearch(const vector<int>& a, int target) {
    for (int i = 0; i < (int) a.size(); i++) {
        if (a[i] == target) {
            return i;
        }
    }

    return -1;
}

// Tìm kiếm tuyến tính - trả về TẤT CẢ vị trí xuất hiện
vector<int> linearSearchAll(const vector<int>& a, int target) {
    vector<int> result;

    for (int i = 0; i < (int) a.size(); i++) {
        if (a[i] == target) {
            result.push_back(i);
        }
    }

    return result;
}

// Template generic - áp dụng cho mọi kiểu dữ liệu có operator ==
template <typename T>

int linearSearchGeneric(const vector<T>& a, const T& target) {
    for (int i = 0; i < (int) a.size(); i++) {
        if (a[i] == target) {
            return i;
        } 
    }

    return -1;
}

// Tìm kiếm trên mảng tĩnh C-style
int linearSearchArray(int a[], int n, int target) {
    for (int i = 0; i < n; i++) {
        if (a[i] == target) return i;
    }
    return -1;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);


    // --- Demo 1: vector<int> cơ bản ---
    vector<int> a = {4, 2, 7, 1, 9, 7, 3};

    cout << "  Mang: ";
    
    for (int x : a) {
        cout << x << " ";
    } 

    cout << "\n";

    int target = 7;
    int idx = linearSearch(a, target);

    if (idx != -1) {
        cout << "linearSearch(a, " << target << ") = " << idx << " (a[" << idx << "] = " << a[idx] << ")\n";
    } else {
        cout << "linearSearch(a, " << target << ") = " << idx << " (khong tim thay -> -1)\n";
    }

    target = 5;
    idx = linearSearch(a, target);
    
    if (idx != -1) {
        cout << "linearSearch(a, " << target << ") = " << idx << " (a[" << idx << "] = " << a[idx] << ")\n";
    } else {
        cout << "linearSearch(a, " << target << ") = " << idx << " (khong tim thay -> -1)\n";
    }


    // --- Demo 2: Tim tat ca vi tri ---
    cout << "\n  Tim tat ca vi tri cua 7:\n";

    vector<int> allPos = linearSearchAll(a, 7);

    cout << "linearSearchAll(a, 7) = ";

    if (allPos.empty()) {
        cout << "khong co\n";
    } else {
        for (int x : allPos) {
            cout << x << " ";
        } 

        cout << "\n";
    }


    // --- Demo 3: Template generic voi string ---
    vector<string> words = {"apple", "banana", "cherry", "banana"};

    cout << "\n  Mang String: ";

    for (string str : words) {
        cout << str << " ";
    } 

    cout << "\n";

    cout << "linearSearchGeneric(words, \"banana\") = " << linearSearchGeneric(words, string("banana")) << "\n";
    cout << "linearSearchGeneric(words, \"grape\")  = " << linearSearchGeneric(words, string("grape")) << " (khong thay)\n";


    // --- Demo 4: Mang tinh ---
    int b[] = {10, 20, 30, 40, 50};

    int n = sizeof(b) / sizeof(b[0]);

    cout << "\n  Mang tinh [10,20,30,40,50]\n"; 
    cout << "linearSearchArray(b, 5, 30) = " << linearSearchArray(b, n, 30) << "\n";

    // --- Demo 5: Nhap tu ban phim (uncomment de test) ---
    /*
    int m, x;
    cout << "\nNhap n: "; cin >> m;
    vector<int> v(m);
    cout << "Nhap " << m << " so: ";
    for (int i = 0; i < m; i++) cin >> v[i];
    cout << "Nhap target: "; cin >> x;
    int ans = linearSearch(v, x);
    if (ans != -1) cout << "Tim thay tai vi tri " << ans << "\n";
    else cout << "Khong tim thay\n";
    */

    return 0;
}
