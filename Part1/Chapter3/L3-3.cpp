#include <iostream>

using namespace std;

int main() {
    int x;
    bool p;
    cin >> x;
    p = (x % 400 == 0) || (x % 4 == 0) && (x % 100 != 0);
    cout << p << endl;
    return 0;
}
