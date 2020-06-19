#include <stdio.h>

int main(int argc, char const *argv[]) {
    argc = 1;
    int a=0, b=4, c=3, d[233];
    d[1] = 0;
    d[1]++;
    d[1]--;
    int e = ++d[1];
    printf("%d", d[1]);
    return 0;
}