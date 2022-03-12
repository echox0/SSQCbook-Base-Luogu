#include <iostream>
#include <cmath>

#define PI 3.141593

using namespace std;

int main() {
    int r1 = 4, r2 = 10;
    double V, l;
    V = 4.0 / 3 * PI * (pow(r1, 3) + pow(r2, 3));
    l = pow(V, 1.0 / 3);
    cout << (int) l << endl;
    return 0;
}
