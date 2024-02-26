// https://www.hackerrank.com/challenges/printing-pattern-2/problem?isFullScreen=true

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n, x = 0;

    scanf("%d", &n);

    int length = n + n - 1;
    int mat[length][length], aux = n;

    while (x < n)
    {
        for (int i = x; i < length - x; i++)
        {
            for (int j = x; j < length - x; j++)
            {
                mat[i][j] = aux;
            }
        }

        x++;
        aux--;
    }

    for (int i = 0; i < length; i++)
    {
        for (int j = 0; j < length; j++)
        {
            if (j == 0)
                printf("%d", mat[i][j]);
            else
                printf(" %d", mat[i][j]);
        }

        printf("\n");
    }

    printf("\n");

    return 0;
}
