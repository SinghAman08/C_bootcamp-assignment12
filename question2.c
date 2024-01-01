// Date-> 12/31/23 ,Author Name = Aman Singh

// 2. Write a recursive function to print first N natural numbers in reverse order.

#include <stdio.h>
void FirstNnatrualRev(int num)
{
    printf("%d ", num);
    if (num == 1)
        return;
    FirstNnatrualRev(num - 1);
}
int main()
{
    int x;
    printf("Enter a number: ");
    scanf("%d", &x);
    FirstNnatrualRev(x);
    return 0;
}