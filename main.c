#include <stdio.h>
int main(void) 
{
    float a,b,c;
    printf (" nhap 3 so ramdom vao\n");
    scanf ("%f%f%f",&a,&b,&c);
if (a<b&&b<c)
{
    printf ("so lon nhat la %f",c);
}
if else ( a>b&&b>c)
{
    printf ("a %f la so lon nhat",a);
}
else
{
    printf ("b %f la so lon nhat",b);
}
return 0;
}