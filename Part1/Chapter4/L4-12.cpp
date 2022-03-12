#include <cstdio>

using namespace std;

int main() {
    int n;
    double s = 0;
    scanf("%d", &n);
    for (double i = 0.1; i + 0.01 < n; i += 0.1)
        s += i;
    printf("%lf", s);
    return 0;
}
