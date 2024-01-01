// Date -> 01/01/2024 ,Author Name = Aman Singh

// 8. Write a recursive function to print binary of a given decimal number

#include <stdio.h>
void decimalTobinary(int num)
{
    if (num == 1)       // Base condition
    {
        printf("%d ", num % 2);
        return;
    }
    decimalTobinary(num / 2);
    printf("%d ", num % 2);
}
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    decimalTobinary(num);
    return 0;
}