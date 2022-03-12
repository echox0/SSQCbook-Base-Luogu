#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    if ((5 * n) < (11 + 3 * n)) {
        cout << "Local" << endl;
    } else {
        cout << "Luogu" << endl;
    }
    return 0;
}
