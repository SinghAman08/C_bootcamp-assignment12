// Date -> 01/01/2024 ,Author Name = Aman Singh

// 6. Write a recursive function to print first N even natural numbers in reverse order

#include <stdio.h>

void FirstN_evenNatual(int num);
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    FirstN_evenNatual(num);
    return 0;
}

void FirstN_evenNatual(int num)
{
    int static x = 2;
    if (num == 1)
    {
        printf("%d ", x);
        return;
    }
    x += 2;
    FirstN_evenNatual(num - 1);
    x -= 2;
    printf("%d ",x);
}