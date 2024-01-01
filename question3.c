// Date -> 01/01/2024 ,Author Name = Aman Singh

// 3. Write a recursive function to print first N odd natural numbers

#include <stdio.h>

void FirstN_odd(int num)
{
    int static x = 1;
    if (num == 1)       // Base condition
    {
        printf("%d ", x);
        return;
    }
    FirstN_odd(num - 1);
    printf("%d ", x += 2);
}
int main()
{
    
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    FirstN_odd(num);
    return 0;
}