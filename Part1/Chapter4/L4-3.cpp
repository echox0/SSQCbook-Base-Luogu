#include <cstdio>
#include <iostream>

using namespace std;

int main() {
    int n, k;
    int Asum = 0, Bsum = 0;
    cin >> n >> k;
    for (int i = k; i <= n; i += k)
        Asum += i;
    Bsum = (1 + n) * n / 2 - Asum;
    printf("%.1f %.1f", double(Asum) / (n / k), double(Bsum) / (n - n / k));
    return 0;
}
