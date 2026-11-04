#include <stdio.h>
int main() 
{
float e,DTB;
int z,DRL;
scanf ("%f%d",&e,&z);
DTB=e;
DRL=z;
if (DTB>=9.0)
{
if (DRL>=90)
{
printf ("HOC_BONG_XUAT_SAC");
}

if (80<=DRL<90)
{
printf ("HOC_BONG_GIOI");
}
if (DRL<70)
{
printf("HOC_BONG_KHA");
}
}
if (8.0<=DTB<9.0)
{
if (DRL>=90)
{
printf ("HOC_BONG_GIOI");
}
if (DRL<70)
{
printf("HOC_BONG_KHA");
}
}
if (7.0<=DTB<8.0)
{
printf ("HOC_BONG_KHA");
}
else 
{
printf("KHONG_DAT");
}
  return 0;
}