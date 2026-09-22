#include <iostream>
#include <cmath>
#include <math.h>

using namespace std;

// ============================================================================
// Ta nhận thấy khi ánh sáng phản xạ thì khoảng cách từ điểm xuất phát đến điểm
//  phản xạ đầu tiên có độ dài là a = x * tan(θ)
// Các điểm phạn xạ tiếp theo có khoảng cách giữa 2 điểm đều bằng nhau có độ
//  dài là b = d * tan(θ) 
//
// 
// ============================================================================

const double PI = 3.14159265358979323846;

int main() {
    int n;
    cin >> n;
    
    while (n--) {
        double l, d, x, goc;
        cin >> l >> d >> x >> goc;

        double gocRadian = goc * (PI / 180);

        double a = x * tan(gocRadian);
        double b = d * tan(gocRadian);

        cout << abs(ceil((l - a) / b)) << "\n";
    }
}

