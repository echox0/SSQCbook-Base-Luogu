#include <iostream>

using namespace std;
#define MAXN 205

int main() {
    int n, num = 0, a[MAXN];
    cin >> n;
    while (n != 1) {
        a[num++] = n;
        if (n % 2 == 0)
            n /= 2;
        else
            n = 3 * n + 1;
    }
    a[num] = 1;     // 将最后一个1加入数组
    for (int i = num; i >= 0; i--)  // 倒序输出
        cout << a[i] << ' ';
    return 0;
}
