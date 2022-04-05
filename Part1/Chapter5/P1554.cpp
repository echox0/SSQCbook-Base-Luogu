#include <cstdio>

using namespace std;
int t[10];

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    for (int i = a; i <= b; i++) {
        int n = i;
        while (n > 0) {
                t[n % 10]++;
                n /= 10;
        }
    }
    for (int i = 0; i <= 9; i++)
        printf("%d ", t[i]);
    return 0;
}
