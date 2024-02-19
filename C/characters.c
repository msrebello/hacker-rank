// https://www.hackerrank.com/challenges/playing-with-characters/problem?isFullScreen=true

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#define MAX_LEN 99

int main() 
{
    char ch;
    char s[MAX_LEN];
    char sen[MAX_LEN];
    
    scanf("%c", &ch);
    scanf("%s", s);
    scanf("\n"); // lê a quebra de linha
    scanf("%[^\n]%*c", sen); // lê uma linha inteira (sentença) até a quebra
    
    printf("%c\n", ch);
    printf("%s\n", s);
    printf("%s\n", sen);
    
    return 0;
}