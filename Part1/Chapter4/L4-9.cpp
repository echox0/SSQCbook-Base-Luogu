#include <cstdio>

using namespace std;

int main() {
    int k, n = 0;
    scanf("%d", &k);
    for (double Sn = 0; Sn <= k; n++, Sn += 1.0 / n);
    printf("%d", n);
    return 0;
}
