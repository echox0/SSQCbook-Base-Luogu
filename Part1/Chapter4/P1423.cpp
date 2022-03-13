#include <cstdio>

using namespace std;

int main() {
    double n, l = 2;
    long long steps = 0;
    scanf("%lf", &n);

    do {
        n -= l;
        l *= 0.98;
        steps++;
    } while (n > 0);
    printf("%lld", steps);
    return 0;
}
