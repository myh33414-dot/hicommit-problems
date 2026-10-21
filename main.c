#include <stdio.h>
int main(void) 
{
    int a,b,c;
    scanf ("&d&d&d",&a,&b,&c);
if (a<b&&b<c)
{
    printf ("%d",c);
}
else if ( a>b&&b>c)
{
    printf ("%d",a);
}
else
{
    printf ("%d",b);
}
return 0;
}