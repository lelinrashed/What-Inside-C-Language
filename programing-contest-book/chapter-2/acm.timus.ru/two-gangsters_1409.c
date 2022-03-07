#include <stdio.h>

int main()
{
    int x, y;

    scanf("%d %d", &x, &y);

    int sum = x + y - 1;

    printf("%d %d\n", (sum - x), (sum - y));

    return 0;
}