#include <stdio.h>
int main() 
{
float e,DTB;
int z,DRL;
scanf ("%f%d",&e,&z);
DTB=e;
DRL=z;
if (9.0<=DTB)
  {
if (90<=DRL)
{
printf ("HOC_BONG_XUAT_SAC");
}

else if (80<=DRL)
{
printf ("HOC_BONG_GIOI");
}
else if (70<=DRL)
{
printf("HOC_BONG_KHA");
}
else 
{
printf ("KHONG_DAT");
}
  }
else if (8.0<=DTB)
  {
if (80<=DRL)
{
printf ("HOC_BONG_GIOI");
}
else if (70<=DRL)
{
printf("HOC_BONG_KHA");
}
else 
{
printf ("KHONG_DAT");
}
}
else if (7.0<=DTB)
  {
if (70<=DRL)
{
printf("HOC_BONG_KHA");
}
else 
{
printf("KHONG_DAT");
}
  }
else
{
printf("KHONG_DAT");
}
  return 0;
}