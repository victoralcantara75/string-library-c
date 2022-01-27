#include "strlib.h"
#include <stdlib.h>
#include <stdio.h>

int str_lenght(char *str){
    int i = 0;

    if (str == NULL)
        return -1;

    while (1)
    {
        if(str[i] == '\0')
            break;

        i++;
    } 

    return i;
}


char *str_duplicate(char *str){
    
    int tamanho = str_lenght(str);
    int i;
    char *novaStr = NULL;
    
    if (str == NULL || tamanho == 0)
        return novaStr;

    novaStr = (char*)malloc(tamanho*sizeof(char));

    for (i = 0; i <= tamanho; i++)
    {
        novaStr[i] = str[i];
    }
    
    return novaStr;

}

int str_compare(char *strA, char *strB){

    int i = 0;
    while (1)
    {
        
        if (strA[i] == '\0' && strB[i] == '\0')
            break;
        else if(strA[i] < strB[i] || strA[i] == '\0')
            return -1;
        else if (strA[i] > strB[i] || strB[i] == '\0')
            return 1;

        i++;
    }
    
    return 0;
    
}

int str_reverse(char *str){
    
    if (str == NULL)
        return 0;
    else if (str_compare(str, "") == 0)
        return 1;

    
    int tamanho = str_lenght(str);
    int j = tamanho-1,i;

    char *strAux = (char*)malloc((tamanho+1)*sizeof(char));

    for (i = 0; i < tamanho; i++)
    {
        strAux[i] = str[j];
        j--;
    }
    strAux[i] = '\0';

    for (i = 0; i <= tamanho; i++)
        str[i] = strAux[i];
    
    return 1;
}

int str_upper(char *str){

    if (str == NULL)
        return -1;

    int tamanho = str_lenght(str);
    int i, ascii, cont = 0;

    for (i = 0; i < tamanho; i++)
    {
        ascii = str[i];
        if (ascii >= 97 && ascii <= 122){
            ascii -= 32;
            str[i] = ascii;
            cont++;
        }
    }

    return cont;
}

int str_lower(char *str){

    if (str == NULL)
        return -1;

    int tamanho = str_lenght(str);
    int i, ascii, cont = 0;

    for (i = 0; i < tamanho; i++)
    {
        ascii = str[i];
        if (ascii >= 65 && ascii <= 90){
            ascii += 32;
            str[i] = ascii;
            cont++;
        }
    }

    return cont;
}

int str_copy(char *dst, char *scr){
    if (dst == NULL || scr == NULL)
        return -1;

    int tamanhodst = sizeof(dst);
    int tamanhosrc = sizeof(scr);
    int i;

    if (tamanhodst < tamanhosrc)
        return 0;

    for (i = 0; i <= tamanhosrc; i++)
    {
        dst[i] = scr[i];
    }

    return 1;
    
}

