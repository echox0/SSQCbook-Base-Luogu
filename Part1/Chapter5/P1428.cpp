#include <iostream>

using namespace std;

int main() {
    int a[110], n;
    cin >> n;
    for (int i = 0; i <  n; i++)        // 读入每条鱼的可爱值
        cin >> a[i];
    for (int i = 0; i < n; i++) {       // 枚举n条鱼
        int cnt = 0;
        for (int j = i - 1; j >= 0; j--)        // 从第i个位置倒着往前找
            if (a[j] < a[i])
                cnt++;      // 如果找到比第i条鱼没有比不上，计数器就增加1
        cout << cnt << ' ';
    }
    return 0;
}
