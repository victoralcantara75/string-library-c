#include <stdio.h>
#include "strlib.h"

int main(){
    // ---- STR LENGHT
    // int tamanho = str_lenght("Teste");

    // ---- STR DUPLICATE
    // str_duplicate("Teste");

    // ---- STR COMPARE
    // printf("%d\n", str_compare("", ""));

    // ---- STR REVERSE
    // char teste[5] = {'a', 'b', 'c', 'd'};
    // if (str_reverse(teste))
    //     printf("%s\n", teste);

    // ----- STR UPPER
    // char teste[6] = {'t', 'E', '-', 't', 'e'};
    // printf("%d", str_upper(teste));

    // ----- STR LOWER
    char teste[6] = {'T', 'E', '-', 't', 'E'};
    printf("%d", str_lower(teste));

    // ----- STR COPY
    // char fonte[10] = {'T', 'E', 'S', 'T', 'E'};
    // char dest[10];

    // printf("%d", str_copy(dest, fonte));
    // printf("%s", dest);

    return 0;
}