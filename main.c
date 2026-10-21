#include <stdio.h>
int main(void) 
{
    float a,b,c;
    printf (" nhap 3 so ramdom vao\n");
    scanf ("%f%f%f",&a,&b,&c);
if (a<b&&b<c)
{
    printf ("%f",c);
}
else if ( a>b&&b>c)
{
    printf ("%f",a);
}
else
{
    printf ("%f",b);
}
return 0;
}