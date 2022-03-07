#include <stdio.h>

int main()
{
    int number_of_panel, length_of_panel, width_of_panel;

    scanf("%d %d %d", &number_of_panel, &length_of_panel, &width_of_panel);

    printf("%d\n", 2 * (number_of_panel * (length_of_panel * width_of_panel)));

    return 0;
}