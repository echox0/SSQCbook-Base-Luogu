#include <cstdio>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    int ans, guess;
    srand(time(0));
    ans = rand() % 100 + 1;
    do {
        scanf("%d", &guess);
        if (guess < ans)
            printf("Too small\n");
        if (guess > ans)
            printf("Too large\n");
    } while (ans != guess);
    printf("You are right!!\n");
    return 0;
}
