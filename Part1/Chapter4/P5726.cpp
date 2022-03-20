#include <cstdio>
#include <algorithm>

using namespace std;

int main() {
    int n, sum = 0;
    scanf("%d", &n);
    int a[n];
    for (int i = 1; i <= n; i++)
        scanf("%d", &a[i]);

    sort(a + 1, a + n + 1);
    for (int i = 2; i <= n - 1; i++)
        sum += a[i];
    double total = (double) sum / (n - 2);
    printf("%.2lf", total);
    return 0;
}
