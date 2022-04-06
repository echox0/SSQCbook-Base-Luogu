#include <iostream>
#include <algorithm>

using namespace std;
int a[99999], maxt, maxn, num;

int main() {
    int s1, s2, s3;
    cin >> s1 >> s2 >> s3;
    /* 数据量小，可使用三层穷举 */
    for (int i = 1; i <= s1; i++)
        for (int j = 1; j <= s2; j++)
            for (int k = 1; k <= s3; k++) {
                a[i + j + k]++;     // 依次记录次数
                maxt = max(maxt, i + j + k);        // 优化思想：找到最大值，即为最大次数
            }
    for (int i = 1; i <= maxt; i++)
        if (a[i] > maxn) {
            maxn = a[i];
            num = i;
        }
    cout << num << endl;
    return 0;
}
