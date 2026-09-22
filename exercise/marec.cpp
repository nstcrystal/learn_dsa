#include <iostream>
#include <map>

using namespace std;

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
        // cout << (*it).first << ": " << (*it).second << "\n";

        if ((*it).second >= 4) {
            dem4++;
        }

        if ((*it).second >= 2) {
            dem2++;
        }
    }

    // cout << dem2 << ", " << dem4 << "\n";

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