#include <iostream>
#include <map>

using namespace std;

// ============================================================================
// Bài này ta chỉ cần đếm số lượng của các que diêm có chiều dìa khác nhau
// Nếu Nếu có nhiều que diêm có độ dài x có số lượng >= 2 thì ta lấy 
//
// Vậy nên ta chỉ cần lấy độ dài của gương trừ khoảng cách a rồi đem chia cho b 
// ============================================================================

long long toHop(int n, int k) {
    if (k == 0 || k == n) {
        return 1;
    }

    return toHop(n - 1, k - 1) + toHop(n - 1, k);
}


int main() {
    int n, dem4 = 0, dem2 = 0;
    cin >> n;

    map<int , int> mp;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;

        mp[x]++;
    }

    for (map<int, int>::iterator it = mp.begin(); it != mp.end(); it++) {
        if ((*it).second >= 4) {
            dem4++;
        }

        if ((*it).second >= 2) {
            dem2++;
        }
    }

    if (dem4 != 0) {
        if (dem2 <= 2) {
            cout << 1;
        } else {
            cout << toHop(dem2, 2) + dem4;
        }
    } else {
        if (dem2 <= 2) {
            cout << 1;
        } else {
            cout << toHop(dem2, 2);
        }
    }
}