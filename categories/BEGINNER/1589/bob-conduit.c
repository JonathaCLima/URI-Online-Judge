#include <stdio.h>

int main() {
    int t, r1, r2;

    scanf("%d", &t);

    for (int count = 1; count <= t; count++) {
        scanf("%d %d", &r1, &r2);
        printf("%d\n", (r1 + r2));
    }

    return 0;
}