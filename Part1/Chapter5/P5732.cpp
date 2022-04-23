#include <iostream>
#include <cstring>

using namespace std;
int a[100][100];

int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
        a[i][1] = a[i][i] = 1;      // 赋予初始值为1
    for (int i = 1; i <= n; i++)
        for (int j = 2; j < i; j++)
            a[i][j] = a[i - 1][j] + a[i - 1][j - 1];
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++)
            cout << a[i][j] << " ";
        cout << endl;
    }
    return 0;
}
