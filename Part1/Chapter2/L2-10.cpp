#include <iostream>
#include <cstdio>

using namespace std;

int main() {
    int a, b, c, d, e, f, delta;
    cin >> a >> b >> c >> d;
    delta = (60 * c + d) - (60 * a + b);
    e = delta / 60;
    f = delta % 60;
    printf("%d %d", e, f);
    return 0;
}
