#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int a, b, p = 19;
    cin >> a >> b;
    int totalJ = a * 10 + b;
    int sum = floor(totalJ / p);
    cout << sum << endl;
    return 0;
}
