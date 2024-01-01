// Date -> 01/01/2024 ,Author Name = Aman Singh

// 10. Write a recursive function to print reverse of a given number

#include <stdio.h>

void Reverse(int num)
{
    if (num < 10)
    {
        printf("%d", num);
        return;
    }
    printf("%d", num % 10);
    Reverse(num / 10);
}

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    Reverse(num);
    return 0;
}

