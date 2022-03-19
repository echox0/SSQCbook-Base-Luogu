#include <cstdio>

using namespace std;

int main() {
    int n;
    scanf("%d", &n);

    // 正方形
    for (int i = 1; i <= n * n; i++) {
        if (i < 10) { printf("0%d", i); }
        else { printf("%d", i); }
        if (i % n == 0) { printf("\n"); }
    }

    printf("\n");

    // 三角形
    int cnt = 1;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) { printf("  "); }
        while (cnt <= i * (i + 1) / 2) {
            if (cnt < 10) { printf("0%d", cnt); }
            else { printf("%d", cnt); }
            cnt++;
        }
        printf("\n");
    }
    return 0;
}
