#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    long n =0, c =0, sum = 0;
    scanf("%ld", &n);
    for(c = 1; c <= n; c++)
        sum += c;
    printf("%ld", sum);
    return 0;
}
