#include <stdio.h>
int main() 
{
int a,b;
printf ("hay cac so theo trinh tu a va b\n");
scanf ("%d%d",&a,&b);
if (a%2==0&&b%2!=0)
{
printf ("so CHAN la %d va so LE la %d",a,b);
}
else
 {
printf ("so CHAN la %d va so LE la %d",b,a);
}
return 0;
}


