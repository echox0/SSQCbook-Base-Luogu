#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double a = 1, b = -100, c = 2400;
    double delta, ans;
    delta = pow(b, 2) - 4 * a * c;
    ans = (-b + sqrt(delta)) / (2 * a);

    cout << 110 - (int) (ans + 0.5) << endl;
    return 0;
}
