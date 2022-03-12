#include <cstdio>

using namespace std;

int main() {
    int L, load = 0, ans = 0;
    scanf("%d", &L);
    for (int i = 2; ; i++) {
        int is_prime = 1;
        for (int j = 2; j * j <= i; j++)
            if (i % j == 0) {
                is_prime = 0;
                break;
            }
        if (!is_prime)
            continue;
        if (i + load > L)
            break;
        printf("%d\n", i);
        ans ++;
        load += i;
    }
    printf("%d", ans);
    return 0;
}
