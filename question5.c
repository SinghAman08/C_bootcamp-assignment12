// Date -> 01/01/2024 ,Author Name = Aman Singh

// 5. Write a recursive function to print first N even natural numbers

#include <stdio.h>

void FirstNevenNatural(int num)
{
    int static x = 2;
    if (num == 1)
    {
        printf("%d ", x);
        return;
    }
    printf("%d ", x);
    x += 2;
    FirstNevenNatural(num - 1);
}
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    FirstNevenNatural(num);
    return 0;
}