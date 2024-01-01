// Date -> 01/01/2024 ,Author Name = Aman Singh

// 7. Write a recursive function to print squares of first N natural numbers

#include <stdio.h>
void squaresN_natual(int num)
{
    if (num == 1)
    {
        printf("%d ", num * num);
        return;
    }
    squaresN_natual(num - 1);
    printf("%d ", num * num);
}
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    squaresN_natual(num);
    return 0;
}