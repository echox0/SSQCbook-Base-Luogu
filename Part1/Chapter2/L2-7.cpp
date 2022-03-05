#include <iostream>

using namespace std;

int main() {
    double p;
    int q, a, b, c, d;
    cin >> p;
    q = int(p * 10);
    a = q / 1000;       // 千位
    b = q / 100 % 10;        // 百位
    c = q / 10 % 10;    // 十位
    d = q % 10;         // 个位
    cout << d << "." << c << b << a << endl;
    return 0;
}
