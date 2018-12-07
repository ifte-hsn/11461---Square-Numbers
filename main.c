#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int a, b, sqrt_a, sqrt_b, count;

    while(scanf("%d%d", &a, &b) && !(a==0&&b==0)) {


        sqrt_a = sqrt(a);
        sqrt_b = sqrt(b);

        if(a == 0) {
            sqrt_a = 1;
        }

        if(b == 0) {
            sqrt_b = 1;
        }


        count=0;


        if(sqrt_a*sqrt_a >= a) {
            count = 1;
        }

        count += (sqrt_b-(sqrt_a+1))+1;

        printf("%d\n", count);
    };
    return 0;
}
