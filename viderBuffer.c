#include <stdlib.h>
#include <stdio.h>

void viderBuffer(void)
{
    int c = 0;
    while (c != '\n' && c != EOF)
    {
        c = getchar();
    }
}
