#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int a = 0, b = 0, c = 0;
    //scanf("%d%d%d", &a,&b,&c);
    scanf("%d,%d,%d", &a, &b, &c);


    if(a >= b && a >= c)
        printf("%d", a);
    else{
        if(b >= c && b >= a)
            printf("%d", b);
        else
            printf("%d", c);
    }
    return 0;
}
