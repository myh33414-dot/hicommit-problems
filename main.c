#include <stdio.h>
int main() 
{
float e,DTB;
int z,DRL;
scanf ("%f%d",&e,&z);
DTB=e;
DRL=z;
if (DTB>=9.0&&DRL>=90)
{
printf ("HOC_BONG_XUAT_SAC");
}
else if (8.0<=DTB<9.0&&80<=DRL<90)
{
printf ("HOC_BONG_GIOI");
}
else if (7.0<=DTB<8.0||70<=DRL,80)
{
printf ("HOC_BONG_KHA");
}
else if (7.0>DTB||DRL)
{
printf ("KHONG_DAT");
}
else 
{
printf ("HOC_BONG_GIOI");
}


  return 0;
}