#include <iostream>

using namespace std;

int main() {
    int l, m, tree[10010] = {0}, a, b, s = 0;
    cin >> l >> m;
    memset(tree, 0, sizeof(tree));
    for (int i = 0; i < m; i++) {
        cin >> a >> b;
        for (int j = a; j <= b; j++)
            tree[j] = l;
    }
    for (int i = 0; i <= l; i++)
        if (tree[i] == 0)
            s++;
    cout << s << endl;
    return 0;
}
