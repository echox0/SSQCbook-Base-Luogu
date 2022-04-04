#include <iostream>

using namespace std;

int main() {
    int n, a[10], num[10] = {0};
    cin >> n;
    for (int i = 1; i <= 7; i++)        // 创建一个数组存下中奖号码
        cin >> a[i];
    while (n--) {       // 用for也可以
        int ans = 0;
        for (int i = 1; i <= 7; i++) {
            int x;
            cin >> x;
            for (int j = 1; j <= 7; j++)    // 每次对比每个号码是否为中奖号吗
                if (a[j] == x)
                    ans++;
        }
        num[ans]++;
    }
    for (int i = 7; i; i--)
        cout << num[i] << (i == 1 ? '\n' : ' ');        // 输出答案，注意最后一个要加换行而不是空格
    return 0;
}
