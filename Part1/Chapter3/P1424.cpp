#include <iostream>

using namespace std;

int main() {
    int x, n;
    unsigned long long ans = 0;     // 路程绝对不会少
    cin >> x >> n;
    for (int i = 1; i <= n; i++) {
        if ((x != 6) && (x != 7))
            ans += 250;
        if (x == 7) {
            x = 1;
        } else {
            x++;
        }
    }
    cout << ans << endl;
    return 0;
}
