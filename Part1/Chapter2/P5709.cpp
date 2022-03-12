#include <iostream>

using namespace std;

int main() {
    int m, t, s, a;
    cin >> m >> t >> s;
    if (t == 0) {
        cout << 0;
        return 0;
    }
    a = m - ceil((double) s / t);
    if (a <= 0)
        cout << 0;
    else
        cout << a;
    return 0;
}
