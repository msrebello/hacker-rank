// https://www.hackerrank.com/challenges/sum-of-digits-of-a-five-digit-number/problem?isFullScreen=true

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n;
    int mm, m, d, c, u, rest, sum = 0;
    scanf("%d", &n);

    mm = n / 10000;
    m = n % 10000 / 1000;
    c = n % 10000 % 1000 / 100;
    d = n % 10000 % 1000 % 100 / 10;
    u = n % 10000 % 1000 % 100 % 10 / 1;

    sum = mm + m + c + d + u;

    printf("%d\n", sum);

    return 0;
}
