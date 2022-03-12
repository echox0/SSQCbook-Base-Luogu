#include <cstdio>
#include <iostream>

using namespace std;

int main() {
    int a, b, t;
    cin >> a >> b;
    t = a;
    a = b;
    b = t;
    printf("%d %d", a, b);
    return 0;
}
