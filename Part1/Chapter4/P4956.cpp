/*
 * 外层循环枚举k（k ∈ N+），因为k要尽可能小，所以k从1开始；
 * 内层循环枚举x（x ∈ [1,100]，且x ∈ N+）,因为x要尽可能的大，所以x从100开始；
 * 若筹得钱正好等于需要的钱（52 * (7 * x + 21 * k) == money），分两行输出x，k，返回值为0，程序结束。
 * */
#include <cstdio>

using namespace std;

int main() {
    long long money;
    scanf("%lld", &money);

    for (int k = 1;; k++) {
        for (int x = 100; x >= 1; x--) {
            /* 每周一x元，周二x + k元，周三x + 2k元，...，周六x + 6k元，每周共7x + 21k元，52周就是52 × (7x + 21k)元。 */
            if (52 * (7 * x + 21 * k) == money) {
                printf("%d\n%d\n", x, k);
                return 0;
            }
        }
    }
}
