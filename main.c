#include <stdio.h>

int main(void)
{
    int x;

    scanf("%d", &x);

    if (10 <= x && x < 15 && x != 12) {
        printf("OK\n");
    } else {
        printf("NG\n");
    }

    return 0;
}