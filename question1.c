// Date-> 12/31/23 ,Author Name = Aman Singh

// 1. Write a recursive function to print first N natural numbers

#include <stdio.h>
void FirstNnatural(int x);

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    FirstNnatural(n);
    return 0;
}

void FirstNnatural(int x)
{
    if (x == 0)
        return;
    FirstNnatural(x - 1);
    printf("%d ", x);
}
