#include <iostream>

using namespace std;
long long maxn, minn;

long long gcd(long long, long long);

int main() {
    long long a, b, c;      // 由于数据较int更大，所以用long long
    cin >> a >> b >> c;

    /* 最小数判断 */
    minn = a;
    if (b < minn) minn = b;
    if (c < minn) minn = c;

    /* 最大数判断 */
    maxn = a;
    if (b > maxn) maxn = b;
    if (c > maxn) maxn = c;

    cout << gcd(minn, maxn) << "/" << gcd(maxn, minn);
    return 0;
}

long long gcd(long long a, long long b) {
    int y;
    for (int i = a; i >= 1; i--) {          // 从高到低循环，确保求得的书最大公约数（无需判断a、b的大小）
        if (a % i == 0 && b % i == 0) {
            // 判断是否可以同时整除
            y = i;
            break;
        }
    }
    return a / y;
}
