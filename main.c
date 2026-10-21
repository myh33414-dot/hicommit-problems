#include <stdio.h>
int main(void) 
{
    int a;
    int b;
    int c;
    scanf ("%d%d%d",&a,&b,&c);
if (c>b&&c>a)
{
    printf ("%d",c);
}
else if ( b>c&&b>a&&c=b)
{
    printf ("%d",b);
}
else
{
    printf ("%d",a);
}
return 0;
}