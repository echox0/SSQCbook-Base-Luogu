#include <iostream>

using namespace std;
int array[99999];

int main() {
    ios::sync_with_stdio(false);
    int n, t;
    double a;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a >> t;
        for (int j = 1; j <= t; j++) {
            if (array[int(j * a)] == 0)
                array[int(j * a)] = 1;
            else
                array[int(j * a)] = 0;
        }
    }
    for (int i = 1; ; i++) {
        if (array[i] == 1) {
            cout << i << endl;
            break;
        }
    }
    return 0;
}
