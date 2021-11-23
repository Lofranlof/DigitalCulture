#include <stdio.h>

int main()
{
    float var;
    char string[30];
    scanf("%[^\n]s", string);
    scanf("%f", var);//ошибка, забыл &
    printf("\n%s %f", string, var)//пропущена ;
    return 0;
}
