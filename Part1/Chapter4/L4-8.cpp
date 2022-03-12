#include <cstdio>

using namespace std;

int main() {
    int n, x, ans = 0;
    scanf("%d %d", &n, &x);
    for (int i = 1; i <= n; i++) {
        int tmp = i, num;
        while (tmp != 0) {
            num = tmp % 10;
            if (num == x)
                ans++;
            tmp /= 10;
        }
    }
    printf("%d", ans);
    return 0;
}
