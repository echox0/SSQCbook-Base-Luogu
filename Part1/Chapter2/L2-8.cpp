#include <cstdio>

using namespace std;

int main() {
    double t;
    int n;
    scanf("%lf%d", &t, &n);
    printf("%.3lf\n%d", t / n, n * 2);
    return 0;
}
