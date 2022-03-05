#include <iostream>
#include <cstdio>

using namespace std;

int main() {
    int s, v;
    cin >> s >> v;
    int t_walk = ceil(1.0 * s / v) + 10;
    int from_zero = 60 * (24 + 8) - t_walk;
    int hh = (from_zero / 60) % 24;
    int mm = from_zero % 60;
    printf("%02d:%02d", hh, mm);     // 输出两位，用0补齐
    return 0;
}
