#include <iostream>

using namespace std;

int main() {
    int L, i;
    cin >> L;
    for (i = 1; i <= L; i++) {
        cout << "Today, I ate" << i << " apple";
        if (i != 0 && i != 1)
            cout << "s";
        cout << "." << endl;
    }
    return 0;
}
