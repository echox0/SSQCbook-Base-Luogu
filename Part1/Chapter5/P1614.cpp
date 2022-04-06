#include <iostream>
#include <algorithm>

using namespace std;
int h[100000], a[100000];

int main() {
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i <= n - m; i++)
        for (int k = i; k < i + m; k++)
            h[i] = h[i] + a[k];
    sort(h, h + n - m);     // 快排
    cout << h[0];
}
