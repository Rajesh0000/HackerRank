#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    long c = 0, n= 0, fact = 1;
    
    scanf("%ld", &n);
    if(n <= 1)
        printf("%ld", fact);
    else{
        for(c = 2; c <= n; c++){
            fact = fact * c;
        }
        printf("%ld", fact);
    }
    return 0;
}
