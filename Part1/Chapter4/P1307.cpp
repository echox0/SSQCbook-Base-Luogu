#include <cstdio>

using namespace std;

int main() {
    long long n, a = 0;        // 用long long是担心数据会炸
    scanf("%lld", &n);

    while (n) {
        a = a * 10;         //a在十进制中左移一位
        a = a + n % 10;     //a加上n的个位数（原来的个位数变成了现在的最高位数
        n /= 10;
    }
    printf("%lld", a);//输出
    return 0;
}
