#include <stdio.h>

/*
The \c sequence below generates a compiler error, "Unknown escape sequence"
*/
int main()
{
    printf("\cHello, World!\n");
}