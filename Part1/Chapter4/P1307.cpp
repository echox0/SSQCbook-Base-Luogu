#include <iostream>

using namespace std;
int n, s = 0;

int main() {
    cin >> n;
    while (n)
        //如果n不是0，就一直s让一位，腾个0出来，n最后一位跟上去，舍去最后一位
        s = s * 10 + n % 10, n /= 10;
    cout << s;
    return 0;
}