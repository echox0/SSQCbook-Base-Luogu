#include <cstdio>

using namespace std;

int main() {
    int s = 0, n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
        s += i;
    printf("%d", s);
    return 0;
}
