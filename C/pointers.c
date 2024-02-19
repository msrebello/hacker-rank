// https://www.hackerrank.com/challenges/pointer-in-c/problem?isFullScreen=true

#include <stdio.h>

void update(int *a,int *b) {

    int sum = 0, dif = 0;
    sum = *a + *b;
    dif = *a - *b;

    if (dif < 0)
        dif *= -1;
    
    *a = sum;
    *b = dif;
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d\n", a, b);

    return 0;
}