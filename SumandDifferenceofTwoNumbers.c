#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int a,b;
    float c,d;

    scanf("%d %d %f %f", &a, &b, &c, &d);

    printf("%d %d\n%.1f %.1f\n", a+b, a-b, c+d, c-d);
    
    return 0;
}
