#include <iostream>
#include <cstring>

using namespace std;
int a[10], height, sum = 0;

int main() {
    memset(a, 0, sizeof a);
    for (int i = 0; i < 10; ++i)
        cin >> a[i];
    cin >> height;

    for (int i = 0; i < 10; ++i)
        if (a[i] <= height || a[i] <= height + 30)
            sum += 1;

    cout << sum << endl;
    return 0;
}
