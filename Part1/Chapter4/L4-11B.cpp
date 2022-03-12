#include <cstdio>

using namespace std;

int main() {
    int s = 0, i = 0, n;
    scanf("%d", &n);
    while (n--)
        s += ++i;
    printf("%d", s);
    return 0;
}
