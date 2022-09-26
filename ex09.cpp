#include <stdio.h>

int main(int argc, char *argv[])
{
    int v[5];

    v[0] = 10;
    v[1] = 3;
    v[2] = v[0] + v[1];
    v[3] = v[2] + 10;
    v[4] = 11;

    for (int i = 0; i < 5; i++)
        printf(" %d ", v[i]);
    printf("\n");

    return 0;
}