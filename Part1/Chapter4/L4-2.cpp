#include <iostream>

using namespace std;

int main() {
    int n, tmp, minnum = 100000000;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> tmp;
        if (tmp < minnum)
            minnum = tmp;
    }
    cout << minnum << endl;
    return 0;
}
