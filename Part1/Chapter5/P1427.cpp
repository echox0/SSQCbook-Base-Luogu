#include <iostream>

using namespace std;

int main() {
    int n = 0, tmp, a[110];
    do {
        cin >> tmp;
        a[n] = tmp;
        n++;
    } while (tmp != 0);
    n--;
    while (n--)
        cout << a[n] << ' ';
    return 0;
}
