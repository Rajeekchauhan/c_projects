#include <stdio.h>
int main()
{
    int n, sum=0, firstDigit, lastDigit;
    printf("enter a first and second digit");
    scanf("%d", &n);
   
    lastDigit = n % 10;
    while(n >= 10)
    {
        n = n / 10;
    }
    firstDigit = n;

    sum = firstDigit + lastDigit;
    printf("%d", sum);
    return 0;
}
