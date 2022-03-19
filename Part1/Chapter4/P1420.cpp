#include <cstdio>
#include <cstring>

using namespace std;

int main() {
    int n, sum = 1, max = 1;
    scanf("%d", &n);
    int a[n];
    memset(a, 0, sizeof(a));
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < n; i++) {
        if (a[i + 1] == a[i] + 1) {
            sum++;
            if (sum > max)
                max = sum;
        } else {
            sum = 1;
        }
    }

    printf("%d", max);
    return 0;
}
