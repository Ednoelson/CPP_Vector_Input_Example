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

/*
This small example in C language declares an integer array called "v" with a capacity to store 5 elements. Then, it assigns values to each element of the array as follows:

v[0] receives the value 10.
v[1] receives the value 3.
v[2] receives the sum of the values stored in v[0] and v[1] (10 + 3 = 13).
v[3] receives the sum of the value stored in v[2] and 10 (13 + 10 = 23).
v[4] receives the value 11.
Next, the code enters a "for" loop that iterates from 0 to 4 (inclusive) and prints the value of each element of the array using the "printf" function. The output will be a line containing the values of the array, separated by spaces, for example: "10 3 13 23 11".

Finally, the "main" function returns 0, indicating that the program executed successfully.
*/
