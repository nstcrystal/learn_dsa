# Learn DSA with C++ — Lộ Trình Học Data Structure & Algorithm

> Repo tổng quan và lộ trình học DSA từ cơ bản đến nâng cao bằng **C++**.  
> Toàn bộ code, lý thuyết và bài tập được chia thành 2 thư mục chính: `data_structure/` và `algorithm/` để dễ triển khai và ôn tập.

**Mục Lục**

- [1. Giới Thiệu Dự Án](#1-giới-thiệu-dự-án)
- [2. Mục Tiêu](#2-mục-tiêu)
- [3. Yêu Cầu Chuẩn Bị](#3-yêu-cầu-chuẩn-bị)
- [4. Cấu Trúc Thư Mục - Tổng Quan](#4-cấu-trúc-thư-mục---tổng-quan)
- [5. Chi Tiết Thư Mục `data_structure/`](#5-chi-tiết-thư-mục-data_structure)
- [6. Chi Tiết Thư Mục `algorithm/`](#6-chi-tiết-thư-mục-algorithm)
- [7. Lộ Trình Học Gợi Ý](#7-lộ-trình-học-gợi-ý)
- [8. Cách Sử Dụng Repo](#8-cách-sử-dụng-repo)
- [9. Quy Ước Code C++](#9-quy-ước-code-c)
- [10. Tài Nguyên Học Tập](#10-tài-nguyên-học-tập)
- [11. Checklist Tiến Độ](#11-checklist-tiến-độ)

## 1. Giới Thiệu Dự Án

**Data Structure (Cấu trúc dữ liệu)** là cách tổ chức/lưu trữ dữ liệu.  
**Algorithm (Thuật toán)** là tập hợp các bước giải quyết bài toán.

Repo này được tạo ra để:

- Hệ thống hóa kiến thức DSA theo lộ trình chuẩn, học bằng C++
- Mỗi chủ đề có code mẫu, phân tích độ phức tạp và bài tập thực hành
- Dễ dàng tra cứu lại khi cần ôn tập phỏng vấn / thi đấu

**Vì sao chọn C++?**

- Tốc độ nhanh, kiểm soát bộ nhớ tốt (con trỏ, tham chiếu)
- STL mạnh mẽ: `vector`, `map`, `set`, `queue`, `algorithm`, `priority_queue`
- Ngôn ngữ chính trong Olympic Tin học và phỏng vấn thuật toán

## 2. Mục Tiêu

Sau khi hoàn thành repo bạn sẽ:

- Nắm vững các cấu trúc dữ liệu nền tảng đến nâng cao
- Thành thạo các kỹ thuật thuật toán quan trọng (Two Pointers, DP, Graph...)
- Phân tích được độ phức tạp `Big O` và tối ưu code
- Có nền tảng để học tiếp System Design, Competitive Programming, AI

## 3. Yêu Cầu Chuẩn Bị

### Môi trường

- Compiler `g++` (MinGW / clang / g++ trên Linux)
- VS Code + extension C/C++ hoặc CLion / Code::Blocks

```bash
g++ --version
g++ main.cpp -o main && ./main
```

### Kiến thức C++ tối thiểu

| Chủ đề | Nội dung |
| :--- | :--- |
| Cú pháp cơ bản | `iostream`, `cin/cout`, biến, `if/else`, `for/while` |
| Hàm & Tham chiếu | Hàm, `pass by value/reference`, `&` |
| Mảng & Chuỗi | `int a[100]`, `string`, `vector` |
| Con trỏ | `int *p`, `new/delete` |
| Struct/Class | `struct Node { ... }` |
| STL cơ bản | `vector`, `string`, `sort`, `pair` |
| Tối ưu I/O | `ios::sync_with_stdio(false); cin.tie(nullptr);` |

## 4. Cấu Trúc Thư Mục - Tổng Quan

Repo được chia thành **2 thư mục con chính** để tách bạch rõ ràng:

```
learn_dsa_algorithm/
├── README.md                      # File tổng quan (bạn đang đọc)
│
├── data_structure/                # 1. CẤU TRÚC DỮ LIỆU - Nơi lưu trữ dữ liệu
│   ├── 01_array/
│   ├── 02_string/
│   ├── 03_linked_list/
│   ├── 04_stack/
│   ├── 05_queue/
│   ├── 06_hash_table/
│   ├── 07_tree/
│   ├── 08_heap/
│   ├── 09_graph/
│   ├── 10_trie/
│   ├── 11_segment_tree_fenwick/
│   └── 12_disjoint_set_union/
│
└── algorithm/                     # 2. THUẬT TOÁN - Kỹ thuật giải bài toán
    ├── 01_complexity/             # Big O, phân tích độ phức tạp
    ├── 02_sorting/                # Bubble, Merge, Quick, Heap Sort...
    ├── 03_searching/              # Linear, Binary Search...
    ├── 04_recursion/
    ├── 05_backtracking/
    ├── 06_two_pointers_sliding_window/
    ├── 07_greedy/
    ├── 08_divide_and_conquer/
    ├── 09_dynamic_programming/
    ├── 10_graph_algorithms/       # BFS, DFS, Dijkstra, Topo, MST...
    └── 11_string_algorithms/      # KMP, Rabin-Karp, Z...
```

> **Nguyên tắc phân chia:** `data_structure/` trả lời câu hỏi *"Dữ liệu được tổ chức như thế nào?"*, còn `algorithm/` trả lời *"Giải bài toán bằng kỹ thuật gì?"*

Mỗi thư mục con sẽ chứa:

```
01_array/
├── README.md          # Lý thuyết tóm tắt + độ phức tạp
├── 01_implementation.cpp  # Tự cài đặt cấu trúc
├── 02_example.cpp         # Ví dụ minh họa
└── exercises/             # Bài tập (link LeetCode + lời giải)
```

## 5. Chi Tiết Thư Mục `data_structure/`

| # | Thư mục | Nội dung chính | File gợi ý | Độ khó |
| :--- | :--- | :--- | :--- | :--- |
| 01 | `01_array/` | Mảng tĩnh, `vector`, thao tác chèn/xóa/đảo, Prefix Sum | `vector_demo.cpp`, `prefix_sum.cpp` | ⭐ |
| 02 | `02_string/` | `string`, ASCII, `substr`, `find`, xử lý chuỗi | `string_ops.cpp` | ⭐ |
| 03 | `03_linked_list/` | Singly/Doubly/Circular, Slow-Fast Pointer, đảo list | `singly.cpp`, `reverse.cpp`, `has_cycle.cpp` | ⭐⭐ |
| 04 | `04_stack/` | LIFO, `std::stack`, Monotonic Stack, kiểm tra ngoặc | `stack_array.cpp`, `valid_parentheses.cpp` | ⭐⭐ |
| 05 | `05_queue/` | FIFO, `queue`, `deque`, `priority_queue` | `queue.cpp`, `deque.cpp` | ⭐⭐ |
| 06 | `06_hash_table/` | `unordered_map/set` vs `map/set`, Frequency Map, va chạm | `hash_demo.cpp`, `two_sum.cpp` | ⭐⭐ |
| 07 | `07_tree/` | Binary Tree, BST, Duyệt Inorder/Preorder/Postorder/Level Order | `traversal.cpp`, `bst.cpp` | ⭐⭐⭐ |
| 08 | `08_heap/` | Max/Min Heap, `priority_queue`, Heap Sort, Top K | `heap.cpp`, `top_k.cpp` | ⭐⭐⭐ |
| 09 | `09_graph/` | Biểu diễn đồ thị: ma trận kề, danh sách kề | `adj_list.cpp`, `adj_matrix.cpp` | ⭐⭐⭐ |
| 10 | `10_trie/` | Cây tiền tố, Autocomplete, tìm kiếm từ điển | `trie.cpp` | ⭐⭐⭐ |
| 11 | `11_segment_tree_fenwick/` | Segment Tree, BIT - truy vấn đoạn `O(log n)` | `seg_tree.cpp`, `fenwick.cpp` | ⭐⭐⭐⭐ |
| 12 | `12_disjoint_set_union/` | DSU / Union-Find, `find` + `unite` + nén đường đi | `dsu.cpp` | ⭐⭐⭐ |

## 6. Chi Tiết Thư Mục `algorithm/`

| # | Thư mục | Nội dung chính | Kỹ thuật trọng tâm | Độ khó |
| :--- | :--- | :--- | :--- | :--- |
| 01 | `01_complexity/` | Big O, Big Theta, Omega, phân tích Time/Space | Quy tắc bỏ hằng, bậc thấp | ⭐ |
| 02 | `02_sorting/` | Bubble/Selection/Insertion `O(n²)`, Merge/Quick/Heap `O(n log n)`, Counting/Radix | `sort()` + custom comparator | ⭐⭐ |
| 03 | `03_searching/` | Linear `O(n)`, Binary Search `O(log n)` + biến thể (tìm biên, tìm trên đáp án) | Binary Search on Answer | ⭐⭐ |
| 04 | `04_recursion/` | Base case, Recursive case, Fibonacci, Tower of Hanoi | Đệ quy vs vòng lặp | ⭐⭐ |
| 05 | `05_backtracking/` | Choose - Explore - Unchoose, N-Queens, Sudoku, Permutations | Cắt nhánh (Pruning) | ⭐⭐⭐ |
| 06 | `06_two_pointers_sliding_window/` | Two Pointers, Sliding Window, Prefix Sum + Hashing | Cửa sổ trượt, 2 con trỏ | ⭐⭐ |
| 07 | `07_greedy/` | Tham lam, Activity Selection, đổi tiền, Huffman | Chứng minh tính đúng đắn | ⭐⭐⭐ |
| 08 | `08_divide_and_conquer/` | Chia để trị, Merge Sort, Quick Sort, Binary Search | Chia nhỏ -> Gộp | ⭐⭐ |
| 09 | `09_dynamic_programming/` | **Boss cuối** - Memoization vs Tabulation, 1D/2D/Chuỗi/Knapsack/Bitmask | 6 dạng DP kinh điển | ⭐⭐⭐⭐ |
| 10 | `10_graph_algorithms/` | BFS, DFS, Topo Sort, Dijkstra, Bellman-Ford, Floyd, Kruskal/Prim (MST) | DSU, hàng đợi ưu tiên | ⭐⭐⭐⭐ |
| 11 | `11_string_algorithms/` | KMP, Z-algorithm, Rabin-Karp, Rolling Hash | Xử lý chuỗi nâng cao | ⭐⭐⭐⭐ |

### Gợi ý file trong `algorithm/09_dynamic_programming/`

```
09_dynamic_programming/
├── README.md
├── 01_fibonacci_memo_tabulation.cpp
├── 02_knapsack_01.cpp
├── 03_lcs_lis.cpp
├── 04_coin_change.cpp
└── 05_edit_distance.cpp
```

## 7. Lộ Trình Học Gợi Ý

Đi theo thứ tự dưới đây, mỗi thư mục tương ứng 1-2 tuần (2-3 giờ/ngày).

```txt
data_structure/01_array + algorithm/01_complexity + 06_two_pointers
    ↓
algorithm/02_sorting + 03_searching
    ↓
data_structure/04_stack + 05_queue + 03_linked_list
    ↓
algorithm/04_recursion + 05_backtracking + data_structure/06_hash_table
    ↓
data_structure/07_tree + 08_heap + 12_disjoint_set_union
    ↓
data_structure/09_graph + algorithm/10_graph_algorithms
    ↓
algorithm/07_greedy + 08_divide_and_conquer
    ↓
algorithm/09_dynamic_programming  (4-5 tuần)
    ↓
data_structure/10_trie + 11_segment_tree_fenwick + algorithm/11_string_algorithms (nâng cao)
```

**Lộ trình 3 tháng (cấp tốc, 3-4h/ngày):** Nền tảng (tuần 1-4) -> Trung cấp (5-8) -> Graph + DP (9-12)  
**Lộ trình 6 tháng (chuẩn, 2h/ngày):** Tháng 1: Nền tảng -> Tháng 2-3: Tree/Graph -> Tháng 4-5: DP -> Tháng 6: Ôn tập + Contest

## 8. Cách Sử Dụng Repo

### 1. Clone

```bash
git clone <repo-url>
cd learn_dsa
```

### 2. Template chuẩn cho mọi file `.cpp`

```cpp
#include <bits/stdc++.h>
using namespace std;

// Ghi chú: Mô tả bài toán + Ý tưởng + Độ phức tạp
// Time: O(...), Space: O(...)

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // code ở đây
    return 0;
}
```

### 3. Quy trình học cho mỗi thư mục

1. Đọc `README.md` trong thư mục đó (lý thuyết + hình minh họa)
2. Chạy thử `*_implementation.cpp` để hiểu cài đặt
3. Tự code lại không nhìn lời giải
4. Làm bài tập trong `exercises/` - từ Easy -> Medium -> Hard

## 9. Quy Ước Code C++

- Đặt tên file: `snake_case.cpp` (ví dụ: `binary_search.cpp`, `lcs_dp.cpp`)
- Mỗi file có comment đầu: đề bài, input/output ví dụ, độ phức tạp
- Ưu tiên dùng STL khi đi phỏng vấn, nhưng phải tự cài được khi cần
- Dùng `long long` khi sợ tràn số, `vector<int>` thay cho mảng tĩnh

**Sheet STL nhanh:**

```cpp
vector<int> v; 
v.push_back(1); 
sort(v.begin(), v.end()); // Sort tăng dần
sort(a.begin(), a.end(), greater<int>()); // Sort giảm dần

string s; 
s.substr(1,3); 
s.find("el");

stack<int> st; 
queue<int> q; 
deque<int> dq;

priority_queue<int> pq; // max-heap
priority_queue<int, vector<int>, greater<int>> minHeap;

set<int> s; // O(log n) có thứ tự
map<int,int> mp; // O(log n) có thứ tự

unordered_set<int> us; // O(1) trung bình
unordered_map<int,int> ump; // O(1) trung bình

lower_bound(a.begin(), a.end(), x); // nhị phân
upper_bound(a.begin(), a.end(), x); // nhị phân
```

## 1. Checklist Tiến Độ

Đánh dấu khi hoàn thành từng thư mục:

```markdown
# Data Structure
- [ ] data_structure/01_array
- [ ] data_structure/02_string
- [ ] data_structure/03_linked_list
- [ ] data_structure/04_stack
- [ ] data_structure/05_queue
- [ ] data_structure/06_hash_table
- [ ] data_structure/07_tree
- [ ] data_structure/08_heap
- [ ] data_structure/09_graph
- [ ] data_structure/10_trie
- [ ] data_structure/11_segment_tree_fenwick
- [ ] data_structure/12_disjoint_set_union

# Algorithm
- [ ] algorithm/01_complexity
- [ ] algorithm/02_sorting
- [ ] algorithm/03_searching
- [ ] algorithm/04_recursion
- [ ] algorithm/05_backtracking
- [ ] algorithm/06_two_pointers_sliding_window
- [ ] algorithm/07_greedy
- [ ] algorithm/08_divide_and_conquer
- [ ] algorithm/09_dynamic_programming
- [ ] algorithm/10_graph_algorithms
- [ ] algorithm/11_string_algorithms

# Mục tiêu số bài
- [ ] 0-100 bài: Mới bắt đầu
- [ ] 100-200 bài: Có nền tảng
- [ ] 200-350 bài: Sẵn sàng phỏng vấn
- [ ] 350+ bài: Thi đấu / Senior
```

## Tổng kết

1. **Đi đúng thứ tự:** Đừng học DP khi chưa vững Recursion.
2. **Code mỗi ngày:** 1 bài/ngày đều đặn > 10 bài/ngày rồi nghỉ.
3. **Hiểu bản chất:** Đừng học thuộc, phỏng vấn luôn đổi đề.
4. **Contest hàng tuần:** LeetCode/Codeforces để rèn áp lực thời gian.
5. **Spaced Repetition:** Làm lại bài cũ sau 3 ngày và 1 tuần.

> “Thuật toán không khó, chỉ là bạn chưa dành đủ thời gian cho nó.”

Chúc bạn kiên trì và sớm làm chủ DSA với C++!

**Ngôn ngữ:** C++ | **Cập nhật:** 09/2026 | **Tác giả:** *nstcrystal*
