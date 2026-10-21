
#include <stdio.h>

int main()
{
    int a, b;
    scanf("%d%d", &a, &b);

    if (a <= 0 || b <= 0)
    {
        printf("INVALID");
    }
    else if (b >= 500000 && a < 15)
    {
        printf("0");
    }
    else if (a >= 1 && a <= 5)
    {
        printf("15000");
    }
    else if (a >= 6 && a < 15)
    {
        printf("25000");
    }
    else if (a>15)
    {
        printf("40000");
    }
    else 
    {
        printf ("hi");
    }

    return 0;
}
