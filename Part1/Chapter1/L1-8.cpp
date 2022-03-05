#include <iostream>

using namespace std;

int main() {
    int balance = 100;
    balance = balance + 10;

    cout << balance << endl;
    balance -= 20;
    cout << balance << endl;
    balance = 0;
    cout << balance << endl;
    return 0;
}
