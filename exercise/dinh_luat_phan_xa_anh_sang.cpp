#include <iostream>
#include <cmath>
#include <math.h>

using namespace std;



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

