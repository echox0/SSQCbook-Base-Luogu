#include <iostream>

using namespace std;

int main() {
    int v[22][22][22], w, x, h, q, x1, x2, y1, y2, z1, z2, ans = 0;
    cin >> w >> x >> h >> q;

    for (int i = 1; i <= w; i++)
        for (int j = 1; j <= x; j++)
            for (int k = 1; k <= h; k++)
                v[i][j][k] = 1;

    while (q--) {
        cin >> x1 >> y1 >> z1 >> x2 >> y2 >> z2;
        for (int i = x1; i <= x2; i++)
            for (int j = y1; j <= y2; j++)
                for (int k = z1; k <= z2; k++)
                    v[i][j][k] = 0;         // 对每个操作，把删掉的小方块所对应的数组位置赋值为0
    }
    for (int i = 1; i <= w; i++)
        for (int j = 1; j <= x; j++)
            for (int k = 1; k <= h; k++)
                ans += v[i][j][k];      // 所有操作结束之后，对每个小方块看一下是1还是0，计算答案

    cout << ans << endl;
    return 0;
}
