#include <cstdio>

using namespace std;

int main() {
    int k, coin = 0, day = 0;
    scanf("%d", &k);
    for (int i = 1; ; i++)
        for (int j = 1; j <= i; j++) {
            coin += i;
            day++;
            if (day == k) {
                printf("%d\n", coin);
                return 0;
            }
        }
    return 0;
}
