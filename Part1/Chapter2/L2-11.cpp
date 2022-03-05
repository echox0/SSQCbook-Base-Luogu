#include <iostream>

using namespace std;

int main() {
    double a, b, c, sum;
    cin >> a >> b >> c;
    sum = a * 0.2 + b * 0.3 + c * 0.5;
    printf("%.lf", sum);        //double型精度满足要求
    return 0;
}
