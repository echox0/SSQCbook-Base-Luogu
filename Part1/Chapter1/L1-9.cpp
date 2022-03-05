#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double r = 5;
    const double PI = 3.141593;
    // # define PI 3.14125953
    cout << 2 * PI * r << endl;
    cout << PI * pow(r, 2) << endl;
    cout << 4.0 / 3 * PI * pow(r, 3) << endl;
    return 0;
}
