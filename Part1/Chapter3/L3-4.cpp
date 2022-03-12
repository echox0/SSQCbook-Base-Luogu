#include <cstdio>
#include <iostream>

using namespace std;

int main() {
    int total;
    cin >> total;
    if (total == 0)
        printf("Today, I ate 0 apple.");
    else if (total == 1)
        printf("Today, I ate %d apple.", total);
    else
        printf("Today, I ate %d apples.", total);
    return 0;
}
