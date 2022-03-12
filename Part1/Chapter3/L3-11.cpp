#include <iostream>

using namespace std;

int main() {
    int n, n1, n2, n3, p1, p2, p3, t1, t2, t3, total;
    cin >> n >> n1 >> p1 >> n2 >> p2 >> n3 >> p3;
    t1 = !(n % n1) ? n / n1 * p1 : (n / n1 + 1) * p1;
    t2 = !(n % n2) ? n / n2 * p2 : (n / n2 + 1) * p2;
    t3 = !(n % n3) ? n / n3 * p3 : (n / n3 + 1) * p3;
    total = t1;     // 假设第一种是最省钱的方案
    if (t2 < total)
        total = t2;
    if (t3 < total)
        total = t3;
    cout << total << endl;
    return 0;
}

