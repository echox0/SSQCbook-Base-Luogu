#include <iostream>

using namespace std;

int main() {
    int t1, t2, maxtime = 8, maxday = 0;
    for (int i = 1; i <= 7; i++) {
        cin >> t1 >> t2;
        if (t1 + t2 > maxtime)
            maxtime = t1 + t2, maxday = i;
    }
    cout << maxday;
    return 0;
}
