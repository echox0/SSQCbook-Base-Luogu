#include <iostream>

using namespace std;

int main() {
    char opt;
    switch (opt)
    {
    case 'G':
        cout << "Hello, my master!" << endl;
    case 'N':
        cout << "I'm Xiaoluo." << endl;
        break;
    case 'S':
        cout << "Teinei teinei teinei" << endl;
        break;
    case 'B': case 'Q':
        cout << "Bye bye!" << endl;
            break;
    default:
        cout << "Sorry.." << endl;
        break;
    }
    return 0;
}
