#include <iostream>

using namespace std;

int main() {
    long long n, ans = 0;
    for (int i = 1; i <= n; i++) {
        long long factor = 1;
        for (int j = 1; j <= i; j++)
            factor *= j;
        ans += factor;
    }
    cout << ans << endl;
    return 0;
}
