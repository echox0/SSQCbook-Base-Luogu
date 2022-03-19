#include <cstdio>
#include <cmath>

int main() {
    int n;
    scanf("%d", &n);

    for (int i = 2; i <= sqrt(n); ++i)
        if (n % i == 0) {
            printf("%d", n / i);
            break;
        }
    return 0;
}
