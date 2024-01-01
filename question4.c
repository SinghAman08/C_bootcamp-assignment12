// Date -> 01/01/2024 ,Author Name = Aman Singh

// 4. Write a recursive function to print first N odd natural numbers in reverse order

#include <stdio.h>

void FirstN_oddNat_rev(int num)
{
    int static x = 1;
    if (num == 1) // Base condition
    {
        printf("%d ", x);
        return;
    }
    x += 2;
    FirstN_oddNat_rev(num - 1);
    x -= 2;
    printf("%d ", x);
}
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    FirstN_oddNat_rev(num);
    return 0;
}