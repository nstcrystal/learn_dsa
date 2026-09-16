# Lộ Trình Học Data Structure & Algorithm (DSA) với C++

> Lộ trình chi tiết từ cơ bản đến nâng cao dành cho người học DSA bằng ngôn ngữ C++.
> Kiên trì 6 tháng - Làm chủ thuật toán - Sẵn sàng phỏng vấn.

---

## 📋 Mục Lục

1. [Giới Thiệu](#1-giới-thiệu)
2. [Chuẩn Bị Trước Khi Bắt Đầu](#2-chuẩn-bị-trước-khi-bắt-đầu)
3. [Tổng Quan Lộ Trình](#3-tổng-quan-lộ-trình)
4. [Giai Đoạn 0: Nền Tảng C++ Cho DSA](#giai-đoạn-0-nền-tảng-c-cho-dsa--1-2-tuần)
5. [Giai Đoạn 1: Phân Tích Độ Phức Tạp - Big O](#giai-đoạn-1-phân-tích-độ-phức-tạp--big-o--1-tuần)
6. [Giai Đoạn 2: Mảng & Chuỗi - Array, Vector, String](#giai-đoạn-2-mảng--chuỗi---array-vector-string--2-3-tuần)
7. [Giai Đoạn 3: Thuật Toán Sắp Xếp & Tìm Kiếm](#giai-đoạn-3-thuật-toán-sắp-xếp--tìm-kiếm--2-tuần)
8. [Giai Đoạn 4: Stack & Queue](#giai-đoạn-4-stack--queue--1-2-tuần)
9. [Giai Đoạn 5: Linked List](#giai-đoạn-5-linked-list--1-2-tuần)
10. [Giai Đoạn 6: Đệ Quy & Quay Lui - Recursion & Backtracking](#giai-đoạn-6-đệ-quy--quay-lui---recursion--backtracking--2-3-tuần)
11. [Giai Đoạn 7: Hashing](#giai-đoạn-7-hashing--1-2-tuần)
12. [Giai Đoạn 8: Cây - Tree / Binary Tree / BST / Heap](#giai-đoạn-8-cây---tree--binary-tree--bst--heap--3-4-tuần)
13. [Giai Đoạn 9: Đồ Thị - Graph](#giai-đoạn-9-đồ-thị---graph--3-4-tuần)
14. [Giai Đoạn 10: Tham Lam & Chia Để Trị - Greedy & Divide and Conquer](#giai-đoạn-10-tham-lam--chia-để-trị---greedy--divide-and-conquer--1-2-tuần)
15. [Giai Đoạn 11: Quy Hoạch Động - Dynamic Programming (DP)](#giai-đoạn-11-quy-hoạch-động---dynamic-programming-dp--4-5-tuần)
16. [Giai Đoạn 12: Cấu Trúc Dữ Liệu Nâng Cao](#giai-đoạn-12-cấu-trúc-dữ-liệu-nâng-cao--tùy-chọn)
17. [Lộ Trình Theo Thời Gian](#17-lộ-trình-theo-thời-gian-gợi-ý)
18. [Tài Nguyên Học Tập](#18-tài-nguyên-học-tập)
19. [Phương Pháp Học Hiệu Quả](#19-phương-pháp-học-hiệu-quả)
20. [Cấu Trúc Thư Mục Gợi Ý](#20-cấu-trúc-thư-mục-gợi-ý-cho-repo-này)
21. [Checklist & Theo Dõi Tiến Độ](#21-checklist--theo-dõi-tiến-độ)

---

## 1. Giới Thiệu

**Data Structure (Cấu trúc dữ liệu)** là cách tổ chức và lưu trữ dữ liệu.
**Algorithm (Thuật toán)** là các bước giải quyết một bài toán.

Học DSA giúp bạn:
- Tư duy logic và giải quyết vấn đề tốt hơn
- Viết code tối ưu, chạy nhanh, tốn ít bộ nhớ
- Vượt qua phỏng vấn Big Tech (Google, Amazon, FPT, VNG...)
- Nền tảng để học các môn nâng cao: AI, System Design, Competitive Programming

**Tại sao chọn C++ để học DSA?**
- Tốc độ nhanh nhất trong các ngôn ngữ thi đấu
- Kiểm soát bộ nhớ tốt (con trỏ, tham chiếu)
- Thư viện STL cực mạnh (`vector`, `map`, `set`, `queue`, `algorithm`)
- Được dùng trong 90% các kỳ thi Olympic Tin học & phỏng vấn

---

## 2. Chuẩn Bị Trước Khi Bắt Đầu

### 2.1. Cài đặt môi trường

- **Compiler:** `g++` (MinGW trên Windows / clang trên macOS / g++ trên Linux)
- **IDE/Editor:** VS Code + extension C/C++ hoặc CLion, Code::Blocks
- **Kiểm tra cài đặt:**
  ```bash
  g++ --version
  g++ main.cpp -o main && ./main
  ```

### 2.2. Kiến thức C++ tối thiểu cần có

Trước khi vào DSA, bạn phải nắm vững:

| Chủ đề | Nội dung cần nắm |
| :--- | :--- |
| Cú pháp cơ bản | `iostream`, `cin/cout`, biến, kiểu dữ liệu, `if/else`, `for/while`, `switch` |
| Hàm | Khai báo hàm, tham trị / tham chiếu, `pass by reference` |
| Mảng & Chuỗi | Mảng tĩnh `int a[100]`, `string` |
| Con trỏ & Tham chiếu | `int *p`, `&`, cấp phát động `new/delete` |
| Struct & Class | `struct`, `class` cơ bản |
| STL cơ bản | `vector`, `string`, `algorithm` (`sort`, `max`, `min`) |
| Nhập/Xuất nhanh | `ios::sync_with_stdio(false); cin.tie(nullptr);` |

> Nếu chưa vững C++, hãy dành 1-2 tuần học lại qua [learncpp.com](https://www.learncpp.com/) hoặc khóa C++ cơ bản trên YouTube.

---

## 3. Tổng Quan Lộ Trình

```
Giai đoạn 0: Nền tảng C++ (1-2 tuần)
    ↓
Giai đoạn 1: Big O - Độ phức tạp (1 tuần)
    ↓
Giai đoạn 2: Array / Vector / String (2-3 tuần) ─┐
Giai đoạn 3: Sorting / Searching (2 tuần)          │ NỀN TẢNG
Giai đoạn 4: Stack / Queue (1-2 tuần)             │
Giai đoạn 5: Linked List (1-2 tuần) ──────────────┘
    ↓
Giai đoạn 6: Recursion & Backtracking (2-3 tuần)
Giai đoạn 7: Hashing (1-2 tuần)
    ↓
Giai đoạn 8: Tree / BST / Heap (3-4 tuần) ─┐
Giai đoạn 9: Graph (3-4 tuần)               │ TRUNG CẤP
Giai đoạn 10: Greedy / D&C (1-2 tuần) ──────┘
    ↓
Giai đoạn 11: Dynamic Programming (4-5 tuần) ─ NÂNG CAO
    ↓
Giai đoạn 12: Trie / Segment Tree / BIT... ─ CHUYÊN SÂU (tùy chọn)
```

**Tổng thời gian:** ~6 tháng nếu học 2-3 giờ/ngày, làm 3-5 bài/ngày.

---

## Giai Đoạn 0: Nền Tảng C++ Cho DSA (1-2 tuần)

### Mục tiêu
Viết C++ thành thạo để không bị vướng cú pháp khi học thuật toán.

### Kiến thức cần học
- [ ] Biến, kiểu dữ liệu, `long long` vs `int` (tránh tràn số)
- [ ] Vòng lặp, điều kiện, hàm
- [ ] Mảng 1D, 2D, `vector<int>`, `vector<vector<int>>`
- [ ] `string` và các hàm `substr`, `find`, `stoi`
- [ ] Con trỏ, `new/delete`, tham chiếu `&`
- [ ] `struct` / `class` tự định nghĩa
- [ ] STL quan trọng: `vector`, `pair`, `tuple`, `sort`, `reverse`, `binary_search`
- [ ] Kỹ thuật nhập xuất nhanh và `auto`, `range-based for`

### Bài tập luyện tập
- In ra bảng cửu chương, tam giác sao
- Tìm số nguyên tố, UCLN/BCNN
- Quản lý sinh viên bằng `struct`

### Mẫu code chuẩn cho mọi bài DSA

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // code ở đây
    return 0;
}
```

---

## Giai Đoạn 1: Phân Tích Độ Phức Tạp- Big O (1 tuần)

### Mục tiêu
Biết cách đánh giá thuật toán tốt hay dở.

### Kiến thức cần học
- [ ] Big O, Big Theta, Big Omega là gì?
- [ ] Các độ phức tạp phổ biến: `O(1) < O(log n) < O(n) < O(n log n) < O(n²) < O(2ⁿ) < O(n!)`
- [ ] Phân tích độ phức tạp thời gian & không gian (Time & Space Complexity)
- [ ] Quy tắc bỏ hằng số, bỏ bậc thấp
- [ ] Độ phức tạp của vòng lặp lồng nhau, đệ quy

### Ví dụ

```cpp
// O(n)
for(int i = 0; i < n; i++) cout << i;

// O(n^2)
for(int i = 0; i < n; i++)
  for(int j = 0; j < n; j++) cout << i << j;

// O(log n)
for(int i = 1; i < n; i *= 2) cout << i;
```

### Bài tập
- Tính Big O cho các đoạn code cho trước
- So sánh 2 cách giải cùng 1 bài toán

---

## Giai Đoạn 2: Mảng & Chuỗi - Array, Vector, String (2-3 tuần)

### Mục tiêu
Thành thạo thao tác trên mảng - nền tảng của mọi cấu trúc khác.

### Kiến thức cần học
- [ ] Mảng tĩnh vs `vector` động
- [ ] Các kỹ thuật quan trọng:
  - Two Pointers (2 con trỏ)
  - Sliding Window (cửa sổ trượt)
  - Prefix Sum (tổng tiền tố)
  - Difference Array
- [ ] Chuỗi: `string`, `char`, mã ASCII
- [ ] Các thao tác: duyệt, chèn, xóa, đảo ngược, xoay mảng

### Bài tập gợi ý (LeetCode)

| Mức độ | Bài tập |
| :--- | :--- |
| Dễ | Two Sum (1), Remove Duplicates (26), Best Time to Buy Stock (121) |
| Trung bình | Maximum Subarray (53), Product Except Self (238), 3Sum (15), Longest Substring Without Repeating (3) |
| Khó | Trapping Rain Water (42), Median of Two Sorted Arrays (4) |

### Code mẫu - Two Pointers

```cpp
// Đảo ngược mảng
void reverseVector(vector<int>& a) {
    int l = 0, r = a.size() - 1;
    while (l < r) swap(a[l++], a[r--]);
}

// Sliding Window: tổng lớn nhất của k phần tử liên tiếp
int maxSumK(vector<int>& a, int k) {
    int sum = 0;
    for(int i = 0; i < k; i++) sum += a[i];
    int ans = sum;
    for(int i = k; i < a.size(); i++) {
        sum += a[i] - a[i - k];
        ans = max(ans, sum);
    }
    return ans;
}
```

---

## Giai Đoạn 3: Thuật Toán Sắp Xếp & Tìm Kiếm (2 tuần)

### Mục tiêu
Hiểu bản chất các thuật toán kinh điển, không chỉ dùng `sort()`.

### Kiến thức cần học
- [ ] **Tìm kiếm:**
  - Linear Search - `O(n)`
  - Binary Search - `O(log n)` (trên mảng đã sắp xếp)
  - Binary Search biến thể: tìm phần tử đầu/cuối, tìm kiếm trên đáp án
- [ ] **Sắp xếp:**
  - Bubble Sort, Selection Sort, Insertion Sort - `O(n²)`
  - Merge Sort, Quick Sort, Heap Sort - `O(n log n)`
  - Counting Sort, Radix Sort - `O(n)` (trường hợp đặc biệt)
- [ ] Hàm `sort()` trong C++ và `custom comparator`

```cpp
// Binary Search tự cài
int binarySearch(vector<int>& a, int x) {
    int l = 0, r = a.size() - 1;
    while (l <= r) {
        int mid = l + (r - l) / 2;
        if (a[mid] == x) return mid;
        if (a[mid] < x) l = mid + 1;
        else r = mid - 1;
    }
    return -1;
}

// Sort với comparator
sort(a.begin(), a.end(), greater<int>()); // giảm dần
sort(a.begin(), a.end(), [](pair<int,int> &p1, pair<int,int> &p2){
    if (p1.second != p2.second) return p1.second > p2.second;
    return p1.first < p2.first;
});
```

### Bài tập gợi ý
- Binary Search (704), Search Insert Position (35), Find First and Last Position (34)
- Sort Colors (75), Merge Intervals (56), Kth Largest Element (215)

---

## Giai Đoạn 4: Stack & Queue (1-2 tuần)

### Mục tiêu
Hiểu cấu trúc LIFO và FIFO, ứng dụng thực tế.

### Kiến thức cần học
- [ ] **Stack (Ngăn xếp):** `push`, `pop`, `top` - LIFO
  - Cài đặt bằng mảng / `vector` / `std::stack`
  - Ứng dụng: kiểm tra ngoặc `() {} []`, chuyển trung tố -> hậu tố, Undo
- [ ] **Queue (Hàng đợi):** `push`, `pop`, `front` - FIFO
  - `std::queue`, `std::deque`
- [ ] **Deque, Priority Queue**
  - `deque` - hàng đợi 2 đầu
  - `priority_queue` - hàng đợi ưu tiên (Heap)
- [ ] **Monotonic Stack/Queue** - kỹ thuật nâng cao

```cpp
#include <stack>
#include <queue>

stack<int> st;
st.push(1); st.push(2);
st.top(); // 2
st.pop();

queue<int> q;
q.push(1); q.push(2);
q.front(); // 1

// Priority Queue (max-heap mặc định)
priority_queue<int> pq;
pq.push(5); pq.push(1); pq.push(10);
pq.top(); // 10

// Min-heap
priority_queue<int, vector<int>, greater<int>> minHeap;
```

### Bài tập gợi ý
- Valid Parentheses (20), Min Stack (155), Daily Temperatures (739)
- Implement Queue using Stacks (232), Sliding Window Maximum (239) - khó
- Next Greater Element (496)

---

## Giai Đoạn 5: Linked List (1-2 tuần)

### Mục tiêu
Hiểu cách cấp phát động và thao tác con trỏ.

### Kiến thức cần học
- [ ] Singly Linked List, Doubly Linked List, Circular Linked List
- [ ] Các thao tác: duyệt, chèn đầu/cuối/giữa, xóa, đảo ngược
- [ ] Kỹ thuật 2 con trỏ: Slow & Fast Pointer (tìm giữa, phát hiện vòng lặp)
- [ ] Đệ quy trên Linked List

```cpp
struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(nullptr) {}
};

// Đảo ngược Linked List
ListNode* reverseList(ListNode* head) {
    ListNode *prev = nullptr, *curr = head;
    while (curr) {
        ListNode* next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}

// Phát hiện vòng lặp - Floyd
bool hasCycle(ListNode* head) {
    ListNode *slow = head, *fast = head;
    while (fast && fast->next) {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast) return true;
    }
    return false;
}
```

### Bài tập gợi ý
- Reverse Linked List (206), Merge Two Sorted Lists (21), Linked List Cycle (141)
- Remove Nth Node From End (19), Add Two Numbers (2), LRU Cache (146) - khó

---

## Giai Đoạn 6: Đệ Quy & Quay Lui - Recursion & Backtracking (2-3 tuần)

### Mục tiêu
Nắm vững tư duy đệ quy - chìa khóa để học Tree, Graph, DP.

### Kiến thức cần học
- [ ] Đệ quy là gì? Base case, Recursive case
- [ ] Đệ quy vs Vòng lặp, ngăn xếp đệ quy
- [ ] Các bài toán đệ quy kinh điển: Fibonacci, Factorial, Tower of Hanoi
- [ ] **Backtracking (Quay lui):** thử - sai - quay lại
  - Mẫu chung: Chọn -> Đệ quy -> Hoàn tác (Choose - Explore - Unchoose)
- [ ] Cắt nhánh (Pruning) để tối ưu

```cpp
// Backtracking mẫu: Sinh mọi tập con
void backtrack(vector<int>& nums, int start, vector<int>& path, vector<vector<int>>& res) {
    res.push_back(path);
    for (int i = start; i < nums.size(); i++) {
        path.push_back(nums[i]);
        backtrack(nums, i + 1, path, res);
        path.pop_back(); // hoàn tác
    }
}
```

### Bài tập gợi ý
- Subsets (78), Permutations (46), Combination Sum (39)
- N-Queens (51), Sudoku Solver (37), Word Search (79)
- Generate Parentheses (22)

---

## Giai Đoạn 7: Hashing (1-2 tuần)

### Mục tiêu
Truy xuất dữ liệu O(1) - tối ưu tốc độ.

### Kiến thức cần học
- [ ] Bảng băm (Hash Table) là gì? Hàm băm, va chạm (collision)
- [ ] Trong C++: `unordered_map`, `unordered_set` vs `map`, `set`
  - `unordered_map`: băm, trung bình `O(1)`, không có thứ tự
  - `map`: cây đỏ-đen, `O(log n)`, có thứ tự
- [ ] Tần suất (Frequency Map), Two Sum bằng Hashing
- [ ] Kỹ thuật Prefix Sum + Hashing

```cpp
#include <unordered_map>
#include <unordered_set>

unordered_map<int, int> freq;
freq[5]++; // đếm tần suất
for (auto &p : freq) cout << p.first << " " << p.second << "\n";

// Two Sum O(n) bằng Hashing
vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int, int> mp;
    for (int i = 0; i < nums.size(); i++) {
        int need = target - nums[i];
        if (mp.count(need)) return {mp[need], i};
        mp[nums[i]] = i;
    }
    return {};
}
```

### Bài tập gợi ý
- Two Sum (1), Group Anagrams (49), Longest Consecutive Sequence (128)
- Subarray Sum Equals K (560), Top K Frequent Elements (347)

---

## Giai Đoạn 8: Cây - Tree / Binary Tree / BST / Heap (3-4 tuần)

### Mục tiêu
Làm chủ cấu trúc phân cấp quan trọng nhất.

### Kiến thức cần học

#### A. Binary Tree (Cây nhị phân)
- [ ] Thuật ngữ: root, leaf, height, depth, level
- [ ] Duyệt cây: Inorder, Preorder, Postorder (DFS), Level Order (BFS)
- [ ] Cài đặt bằng `struct TreeNode`
- [ ] Đệ quy trên cây

#### B. Binary Search Tree (BST)
- [ ] Tính chất: trái < gốc < phải
- [ ] Các thao tác: tìm kiếm, chèn, xóa - `O(log n)` trung bình
- [ ] `std::set`, `std::map` bản chất là BST

#### C. Heap / Priority Queue
- [ ] Max-Heap, Min-Heap
- [ ] `priority_queue` trong C++
- [ ] Heap Sort, Top K, Merge K Sorted Lists

```cpp
struct TreeNode {
    int val;
    TreeNode *left, *right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

// Duyệt cây - DFS
void inorder(TreeNode* root) {
    if (!root) return;
    inorder(root->left);
    cout << root->val << " ";
    inorder(root->right);
}

// BFS - Level Order
void bfs(TreeNode* root) {
    if (!root) return;
    queue<TreeNode*> q;
    q.push(root);
    while (!q.empty()) {
        TreeNode* cur = q.front(); q.pop();
        cout << cur->val << " ";
        if (cur->left) q.push(cur->left);
        if (cur->right) q.push(cur->right);
    }
}
```

### Bài tập gợi ý
- Maximum Depth of Binary Tree (104), Invert Binary Tree (226), Validate BST (98)
- Lowest Common Ancestor (236), Binary Tree Level Order Traversal (102)
- Kth Smallest in BST (230), Heap: Kth Largest (215), Median Finder (295)

---

## Giai Đoạn 9: Đồ Thị - Graph (3-4 tuần)

### Mục tiêu
Chinh phục cấu trúc khó và quan trọng nhất cho phỏng vấn.

### Kiến thức cần học
- [ ] Biểu diễn đồ thị: Ma trận kề, Danh sách kề (`vector<vector<int>>`)
- [ ] Đồ thị vô hướng / có hướng, có trọng số / không trọng số
- [ ] **DFS (Depth First Search)** - dùng Stack / Đệ quy
- [ ] **BFS (Breadth First Search)** - dùng Queue - tìm đường ngắn nhất (unweighted)
- [ ] Phát hiện chu trình, Sắp xếp Topo (Topological Sort) - Kahn's / DFS
- [ ] **Thuật toán đường ngắn nhất:**
  - Dijkstra - `O((V+E) log V)` - trọng số không âm
  - Bellman-Ford - có trọng số âm
  - Floyd-Warshall - `O(V³)` - mọi cặp đỉnh
- [ ] **Cây khung nhỏ nhất (MST):**
  - Kruskal + DSU (Disjoint Set Union)
  - Prim
- [ ] DSU (Union-Find) - cấu trúc cực kỳ quan trọng

```cpp
// BFS mẫu
void bfs(int start, vector<vector<int>>& adj, vector<bool>& visited) {
    queue<int> q;
    q.push(start);
    visited[start] = true;
    while (!q.empty()) {
        int u = q.front(); q.pop();
        cout << u << " ";
        for (int v : adj[u]) {
            if (!visited[v]) {
                visited[v] = true;
                q.push(v);
            }
        }
    }
}

// DSU
struct DSU {
    vector<int> parent, rnk;
    DSU(int n): parent(n), rnk(n,0) { iota(parent.begin(), parent.end(), 0); }
    int find(int x) { return parent[x]==x ? x : parent[x]=find(parent[x]); }
    bool unite(int a, int b) {
        a = find(a); b = find(b);
        if (a == b) return false;
        if (rnk[a] < rnk[b]) swap(a,b);
        parent[b] = a;
        if (rnk[a]==rnk[b]) rnk[a]++;
        return true;
    }
};
```

### Bài tập gợi ý
- Number of Islands (200), Clone Graph (133), Course Schedule (207)
- Dijkstra: Network Delay Time (743), Path With Minimum Effort (1631)
- DSU: Number of Provinces (547), Redundant Connection (684)

---

## Giai Đoạn 10: Tham Lam & Chia Để Trị - Greedy & Divide and Conquer (1-2 tuần)

### Kiến thức cần học
- [ ] **Greedy:** Chọn tối ưu cục bộ để đạt tối ưu toàn cục
  - Ví dụ: Đổi tiền, Activity Selection, Huffman
  - Không phải lúc nào cũng đúng - cần chứng minh
- [ ] **Divide and Conquer:** Chia nhỏ -> Giải -> Gộp
  - Ví dụ: Merge Sort, Quick Sort, Binary Search

### Bài tập gợi ý
- Jump Game (55), Gas Station (134), Candy (135)
- Merge K Sorted Lists (23) - D&C

---

## Giai Đoạn 11: Quy Hoạch Động - Dynamic Programming (DP) (4-5 tuần)

> **"Boss cuối" của DSA.** 80% ứng viên sợ DP, nếu bạn làm chủ DP bạn sẽ nổi bật.

### Mục tiêu
Nhận diện bài toán DP và giải bằng 2 cách: Top-Down (Memoization) và Bottom-Up (Tabulation).

### Kiến thức cần học
- [ ] Khi nào dùng DP? 2 tính chất: Overlapping Subproblems + Optimal Substructure
- [ ] Memoization (Đệ quy + nhớ) vs Tabulation (Bảng)
- [ ] Các dạng DP kinh điển:
  1. **DP 1D:** Fibonacci, Climbing Stairs, House Robber
  2. **DP 2D / Lưới:** Unique Paths, Minimum Path Sum
  3. **DP Chuỗi:** Longest Common Subsequence (LCS), Longest Increasing Subsequence (LIS), Edit Distance, Palindrome
  4. **DP Ba lô (Knapsack):** 0/1 Knapsack, Unbounded Knapsack, Subset Sum
  5. **DP Trên Cây / Đồ thị**
  6. **DP Bitmask** (nâng cao)
- [ ] Tối ưu không gian DP

```cpp
// Ví dụ: Fibonacci - 3 cách

// 1. Đệ quy thuần - O(2^n) - CHẬM
int fib1(int n) { return n<=1 ? n : fib1(n-1)+fib1(n-2); }

// 2. Memoization - O(n)
vector<int> memo(1000, -1);
int fib2(int n) {
    if (n <= 1) return n;
    if (memo[n] != -1) return memo[n];
    return memo[n] = fib2(n-1) + fib2(n-2);
}

// 3. Tabulation - O(n), O(1) space
int fib3(int n) {
    if (n <= 1) return n;
    int a = 0, b = 1;
    for (int i = 2; i <= n; i++) {
        int c = a + b;
        a = b; b = c;
    }
    return b;
}
```

### Lộ trình học DP (từ dễ đến khó)

| Thứ tự | Dạng bài | Bài tập LeetCode |
| :--- | :--- | :--- |
| 1 | 1D cơ bản | Climbing Stairs (70), House Robber (198), Coin Change (322) |
| 2 | Lưới 2D | Unique Paths (62), Min Path Sum (64) |
| 3 | Chuỗi | LCS (1143), LIS (300), Edit Distance (72), Longest Palindromic Subsequence (516) |
| 4 | Ba lô | Partition Equal Subset Sum (416), Knapsack (0/1) |
| 5 | Tổng hợp | Word Break (139), Regular Expression Matching (10) - khó |

---

## Giai Đoạn 12: Cấu Trúc Dữ Liệu Nâng Cao (Tùy chọn)

Dành cho Competitive Programming hoặc phỏng vấn Senior.

- [ ] **Trie (Cây tiền tố):** Tìm kiếm từ điển, Auto-complete
- [ ] **Segment Tree & Fenwick Tree (BIT):** Truy vấn đoạn `O(log n)` - Range Sum/Min Query
- [ ] **Disjoint Set Union (DSU):** Đã học ở Graph nhưng đào sâu
- [ ] **Hashing nâng cao:** Rolling Hash, Rabin-Karp
- [ ] **String Matching:** KMP, Z-algorithm
- [ ] **Geometry, Bit Manipulation**

---

## 17. Lộ Trình Theo Thời Gian Gợi Ý

### Lộ trình cấp tốc 3 tháng (mỗi ngày 3-4 giờ)

| Tuần | Nội dung | Mục tiêu bài tập |
| :--- | :--- | :--- |
| 1-2 | C++ STL + Big O + Array/String | 30 bài Easy |
| 3-4 | Sorting/Searching + Stack/Queue + Linked List | 30 bài Easy/Medium |
| 5-6 | Recursion/Backtracking + Hashing | 25 bài Medium |
| 7-8 | Tree/BST/Heap | 25 bài Medium |
| 9-10 | Graph (BFS/DFS/Dijkstra/DSU) | 25 bài Medium |
| 11-12 | Greedy + DP cơ bản -> nâng cao | 30 bài Medium/Hard |

### Lộ trình chuẩn 6 tháng (mỗi ngày 2 giờ)

| Tháng | Nội dung | Ghi chú |
| :--- | :--- | :--- |
| 1 | Giai đoạn 0-3 | Nắm vững nền tảng, 60 bài Easy |
| 2 | Giai đoạn 4-6 | Stack/Queue/List/Recursion, 50 bài |
| 3 | Giai đoạn 7-8 | Hashing + Tree, 50 bài |
| 4 | Giai đoạn 9 | Graph chuyên sâu, 40 bài |
| 5 | Giai đoạn 10-11 | Greedy + DP, 60 bài (DP cần nhiều thời gian nhất) |
| 6 | Ôn tập + Mock Interview | Làm lại 100 bài đã làm, thi thử trên LeetCode Contest |

---

## 18. Tài Nguyên Học Tập

### Sách (Reading)
- **Giải Thuật và Lập Trình - Lê Minh Hoàng** (Tiếng Việt, kinh điển cho VNOI)
- **Introduction to Algorithms (CLRS)** - Cormen (Giáo trình đại học)
- **Data Structures and Algorithms in C++** - Adam Drozdek
- **Cracking the Coding Interview** - Gayle Laakmann McDowell (Luyện phỏng vấn)

### Khóa học Video (Tiếng Việt)
- **28Tech** (YouTube) - DSA với C++ cực chi tiết, có bài tập
- **VNOI Wiki** - `vnoi.info` - Lý thuyết và bài tập tiếng Việt
- **Lê Quốc Vương - LQDOJ**

### Khóa học Video (Tiếng Anh)
- **Abdul Bari** (YouTube) - Giải thích thuật toán trực quan
- **CS50 Harvard** - Nền tảng
- **MIT 6.006 Introduction to Algorithms** (YouTube MIT OpenCourseWare)

### Nền tảng luyện bài (Quan trọng nhất)

| Nền tảng | Đặc điểm | Link |
| :--- | :--- | :--- |
| **LeetCode** | Chuẩn phỏng vấn nhất, 2500+ bài | `leetcode.com` |
| **HackerRank** | Tốt cho người mới, có track C++ | `hackerrank.com` |
| **Codeforces** | Thi đấu, tư duy nhanh | `codeforces.com` |
| **LQDOJ / VNOJ** | Bài tập tiếng Việt, Olympic | `lqdoj.edu.vn` / `oj.vnoi.info` |
| **SPOJ** | Bài tập kinh điển | `spoj.com` |
| **GeeksforGeeks** | Lý thuyết + code mẫu C++ | `geeksforgeeks.org` |

### Cheat Sheet C++ STL cho DSA

```cpp
#include <bits/stdc++.h>
using namespace std;

// Vector
vector<int> v = {1,2,3};
v.push_back(4); v.pop_back(); v.size(); sort(v.begin(), v.end());

// String
string s = "hello";
s.length(); s.substr(1,3); s.find("el");

// Stack / Queue / Deque
stack<int> st; queue<int> q; deque<int> dq;
priority_queue<int> pq; // max-heap

// Set / Map (có thứ tự - O(log n))
set<int> s; map<int,int> mp;
unordered_set<int> us; unordered_map<int,int> ump; // O(1) trung bình

// Algorithm
sort(a.begin(), a.end());
reverse(a.begin(), a.end());
binary_search(a.begin(), a.end(), x);
lower_bound(a.begin(), a.end(), x); // iterator
upper_bound(a.begin(), a.end(), x);
max_element(a.begin(), a.end());
accumulate(a.begin(), a.end(), 0); // cần <numeric>
```

---

## 19. Phương Pháp Học Hiệu Quả

### Quy tắc 3 bước cho mỗi chủ đề
1. **Học lý thuyết (20%):** Xem video/đọc sách, hiểu bản chất, vẽ hình minh họa
2. **Cài đặt tay (30%):** Tự code lại cấu trúc dữ liệu từ đầu, không copy-paste
3. **Luyện bài (50%):** Làm 10-20 bài/ chủ đề từ Easy -> Medium -> Hard

### Kỹ thuật Spaced Repetition
- Làm bài hôm nay -> 3 ngày sau làm lại -> 1 tuần sau làm lại
- Nếu không giải được trong 30-45 phút, xem gợi ý/lời giải, sau đó tự code lại
- Ghi chú lại "mẫu hình" (pattern) của từng dạng bài

### Quy tắc LEETCODE
- Đừng chỉ đếm số bài đã làm, hãy đếm số bài bạn có thể **tự giải lại** sau 1 tuần
- Đặt mục tiêu: **300 bài (100 Easy + 150 Medium + 50 Hard)** là đủ để pass hầu hết phỏng vấn

### Debugging trong C++
```cpp
// In mảng để debug
#define debug(x) cerr << #x << " = " << x << endl;
#define printVec(v) for(auto &x: v) cerr << x << " "; cerr << endl;
```

---

## 20. Cấu Trúc Thư Mục Gợi Ý Cho Repo Này

Bạn nên tổ chức code theo từng giai đoạn để dễ ôn tập:

```
learn_dsa_algorithm/
├── README.md
├── 00_cpp_basics/
│   ├── stl_cheatsheet.cpp
│   └── pointers.cpp
├── 01_big_o/
├── 02_array_string/
│   ├── two_pointers.cpp
│   ├── sliding_window.cpp
│   └── prefix_sum.cpp
├── 03_sorting_searching/
│   ├── binary_search.cpp
│   ├── merge_sort.cpp
│   └── quick_sort.cpp
├── 04_stack_queue/
├── 05_linked_list/
├── 06_recursion_backtracking/
├── 07_hashing/
├── 08_tree_heap/
├── 09_graph/
│   ├── bfs_dfs.cpp
│   ├── dijkstra.cpp
│   └── dsu.cpp
├── 10_greedy_divide_conquer/
├── 11_dp/
│   ├── 01_fibonacci.cpp
│   ├── 02_knapsack.cpp
│   └── 03_lcs.cpp
└── 12_advanced/
    ├── trie.cpp
    └── segment_tree.cpp
```

> Mỗi file `.cpp` nên có comment: đề bài, ý tưởng, độ phức tạp.

---

## 21. Checklist & Theo Dõi Tiến Độ

Sao chép checklist này vào issue hoặc file riêng để đánh dấu:

```markdown
- [ ] Giai đoạn 0: C++ cơ bản (1-2 tuần)
- [ ] Giai đoạn 1: Big O (1 tuần)
- [ ] Giai đoạn 2: Array & String (2-3 tuần)
- [ ] Giai đoạn 3: Sorting & Searching (2 tuần)
- [ ] Giai đoạn 4: Stack & Queue (1-2 tuần)
- [ ] Giai đoạn 5: Linked List (1-2 tuần)
- [ ] Giai đoạn 6: Recursion & Backtracking (2-3 tuần)
- [ ] Giai đoạn 7: Hashing (1-2 tuần)
- [ ] Giai đoạn 8: Tree / BST / Heap (3-4 tuần)
- [ ] Giai đoạn 9: Graph (3-4 tuần)
- [ ] Giai đoạn 10: Greedy & D&C (1-2 tuần)
- [ ] Giai đoạn 11: DP (4-5 tuần)
- [ ] Giai đoạn 12: Nâng cao (tùy chọn)
- [ ] Ôn tập & Mock Interview (2 tuần)
```

### Mục tiêu số bài
- [ ] 0-100 bài: Mới bắt đầu
- [ ] 100-200 bài: Có nền tảng
- [ ] 200-350 bài: Sẵn sàng phỏng vấn Intern/Fresher
- [ ] 350+ bài: Sẵn sàng phỏng vấn Middle/Senior & thi đấu

---

## 💡 Lời Khuyên Cuối Cùng

1. **Đừng nhảy cóc:** Học DP khi chưa vững Recursion sẽ rất nản. Hãy đi đúng thứ tự.
2. **Code mỗi ngày:** Thà 1 bài/ngày đều đặn còn hơn 10 bài/ngày rồi nghỉ 1 tuần.
3. **Hiểu chứ không học thuộc:** Phỏng vấn sẽ đổi đề, chỉ khi hiểu bản chất bạn mới biến tấu được.
4. **Tham gia Contest:** Mỗi tuần LeetCode/Codeforces đều có contest - hãy tham gia để rèn áp lực thời gian.
5. **Ghi chú:** Tạo file `notes.md` ghi lại các pattern hay quên.

> **"Thuật toán không khó, chỉ là bạn chưa dành đủ thời gian cho nó."**

Chúc bạn kiên trì và sớm làm chủ DSA với C++! Nếu cần mình tạo thêm file code mẫu cho từng giai đoạn, hãy nói nhé.

---

**Tác giả:** Lộ trình được biên soạn cho `learn_dsa_algorithm` 
**Ngôn ngữ:** C++ (GNU++17/20) 
**Cập nhật:** 09/2026
