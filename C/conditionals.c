// https://www.hackerrank.com/challenges/conditional-statements-in-c/problem?isFullScreen=true

#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* readline();



int main()
{
    char* n_endptr;
    char* n_str = readline();
    int n = strtol(n_str, &n_endptr, 10);

    if (n_endptr == n_str || *n_endptr != '\0') { exit(EXIT_FAILURE); }

    if(n >= 1 && n <= 9) {
        if (n == 1) { printf("one\n"); }
        else if (n == 2) { printf("two\n"); }
        else if (n == 3) { printf("three\n"); }
        else if (n == 4) { printf("four\n"); }
        else if (n == 5) { printf("five\n"); }
        else if (n == 6) { printf("six\n"); }
        else if (n == 7) { printf("seven\n"); }
        else if (n == 8) { printf("eight\n"); }
        else printf("nine\n");
    }
    else printf("Greater than 9\n");

    return 0;
}

char* readline() {
    size_t alloc_length = 1024;
    size_t data_length = 0;
    char* data = malloc(alloc_length); // aloca na memororia o tamanho especifico e tras o endereço (apontando para o primeiro byte)

    while (true) {
        char* cursor = data + data_length;
        char* line = fgets(cursor, alloc_length - data_length, stdin); // lê uma linha de texto da entrada padrão (stdin) e a armazena no buffer data a partir da posição apontada por cursor.

        if (!line) { break; }

        data_length += strlen(cursor);

        if (data_length < alloc_length - 1 || data[data_length - 1] == '\n') { break; }

        size_t new_length = alloc_length << 1;
        data = realloc(data, new_length);

        if (!data) { break; }

        alloc_length = new_length;
    }

    if (data[data_length - 1] == '\n') {
        data[data_length - 1] = '\0';
    }

    data = realloc(data, data_length);

    return data;
}
