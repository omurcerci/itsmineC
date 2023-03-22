#include <stdio.h>

int gcd(int a, int b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}

int lcm(int a, int b)
{
    return (a * b) / gcd(a, b);
}

int main()
{
    int num1, num2;
    printf("Enter two positive integers: ");
    scanf("%d %d", &num1, &num2);
    printf("The GCD of %d and %d is %d\n", num1, num2, gcd(num1, num2));
    printf("The LCM of %d and %d is %d\n", num1, num2, lcm(num1, num2));
    return 0;
}
