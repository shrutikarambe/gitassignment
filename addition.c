#include <stdio.h>
#include "addition.h"

int main()
{
    int x,y;
    printf("Enter the two numbers to add :");
    scanf("%d %d", &x, &y);
    printf("Addition of given number: %d", addition(x,y));
    return 0;
}
