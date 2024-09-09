#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a, b, c;
    printf("Input \"a\" and \"b\": ");
    scanf("%d%d", &a, &b);
    c = a - b;
    printf("Result = %d", c);
    return c;
}