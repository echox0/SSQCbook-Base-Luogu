#include <cstdio>

using namespace std;

int main() {
    int a[12], sum = 0, tg = 0, status = 1, dm;
    for (int i = 1; i <= 12; i++)
        scanf("%d", &a[i]);
    for (int i = 1; i <= 12; i++) {
        sum += 300;
        sum -= a[i];
        if (sum < 0) {
            status = 0;
            dm = i;
            break;
        }
        tg += sum / 100;
        sum %= 100;
    }
    if (status == 1) {
        sum += tg * 120;
        printf("%d\n", sum);
    } else {
        printf("-%d\n", dm);
    }
    return 0;
}
