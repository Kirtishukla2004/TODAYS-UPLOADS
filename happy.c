
#include <stdbool.h>
#include <stdio.h>

// Returns sum of squares of digits of a number n.
// For example for n = 12 it returns 1 + 4 = 5
int sumDigitSquare(int n)
{
    int sq = 0;
    while (n)
    {
        int digit = n % 10;
        sq += digit * digit;
        n = n / 10;
    }
    return sq;
}

// Returns true if n is Happy number else returns false.
bool isHappy(int n)
{
    // Keep replacing n with sum of squares of digits until
    // we either reach 1 or we end up in a cycle
    while (1)
    {
        // Number is Happy if we reach 1
        if (n == 1)
            return true;
        // Replace n with sum of squares of digits
        n = sumDigitSquare(n);
        // Number is not Happy if we reach 4
        if (n == 4)
            return false;
    }
    return false;
}

// Driver code
int main()
{
    int n = 23;
    if (isHappy(n))
        printf("Yes\n");
    else
        printf("No\n");
    return 0;
}