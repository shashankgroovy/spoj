/**********************************************************
 * Compilation: gcc -Wall -o test test.c
 * Execution: ./test
 *
 * Problem 1: Life, the Universe, and Everything
 * url : www.spoj.com/problems/TEST/
 * 
 *********************************************************/

#include <stdio.h>

int main() {
    int n;
    while(1) {
        scanf("%d", &n);
        if(n!=42) 
            printf("%d\n", n);
        else
            break;
    }
    return 0;
}

