// Number
    // Integer
    // Float
// Text
    // Character '%', 'a'
// Boolean
// Custom type



#include<stdio.h>

int main()
{
    int num = 45;
    float num2 = 46.12f;

    char ch = 'c';


    printf("%d\n", num);
    printf("%f\n", num2);
    printf("%c\n", ch);

    num = num2;
    printf("%d\n", num);

    return 0;
}


