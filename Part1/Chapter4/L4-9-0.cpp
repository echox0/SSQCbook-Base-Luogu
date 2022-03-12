#include <cstdio>

using namespace std;
int a[16] = {0, 2, 4, 11, 31, 83, 227, 616, 1674, 4450, 12367, 33617, 91380, 248397, 675214, 1835421};

int main() {
    int k;
    scanf("%d", &k);
    printf("%d", a[k]);
    return 0;
}
