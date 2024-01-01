// Date -> 01/01/2024 ,Author Name = Aman Singh

// 9. Write a recursive function to print octal of a given decimal number

#include <stdio.h>

void DecimalToOctal(int num)
{
    if (num < 8)
    {
        printf("%d", num);
        return;
    }
    DecimalToOctal(num / 8);
    printf("%d", num % 8);
}
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    DecimalToOctal(num);
    return 0;
}