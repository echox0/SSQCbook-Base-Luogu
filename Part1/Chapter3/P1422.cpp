#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double n, sum = 0;
    cin >> n;
    if (n <= 150)
        sum = 0.4463 * n;
    else if (n >= 151 && n <= 400)
        sum = 150 * 0.4463 + (n - 150) * 0.4663;
    else
        sum = 150 * 0.4463 + 250 * 0.4663 + (n - 400) * 0.5663;

    cout << fixed << setprecision(1) << sum << endl;
    return 0;
}
