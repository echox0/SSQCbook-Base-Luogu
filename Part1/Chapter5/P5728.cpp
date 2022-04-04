#include <iostream>
#include <cmath>

#define MAXN 1024

using namespace std;

int main() {
    int n, a[3][MAXN], ans = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[0][i] >> a[1][i] >> a[2][i];
    for (int i = 1; i <= n; i++)        // 枚举第一个学生
        for (int j = i + 1; j <= n; j++)      // 枚举第二个学生
            if (abs(a[0][i] - a[0][j]) <= 5
                && abs(a[1][i] - a[1][j]) <= 5
                && abs(a[2][i] - a[2][j]) <= 5
                && abs(a[0][i] + a[1][i] + a[2][i] - a[0][j] - a[1][j] - a[2][j]) <= 10
            ) {
                ans++;
            }
    cout << ans << endl;
    return 0;

}
