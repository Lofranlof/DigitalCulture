#include <stdio.h>
#include <math.h>

int main()
{
    double a, numenator, denomenator, z1, z2;
    scanf("%lf", &a);
    numenator = sin(2 * a) + sin(5 * a) - sin(3 * a);
    denomenator = cos(a) + 1 - 2 * pow(sin(2 * a), 2);
    z1 = numenator / denomenator;
    z2 = 2 * sin(a);
    printf("%lf\n %lf\n", z1, z2);
    return 0;
}
