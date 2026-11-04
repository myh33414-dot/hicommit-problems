#include <stdio.h>
int main() 
{
float e;
int z;
scanf ("%f%d",&e,&z);
DTB=e;
DRL=z;
if (DTB>=9.0&&DRL>=90)
{
printf ("HOC_BONG_XUAT_SAC");
}
else if (8.0<=DTB<9.0&&DRL>=80||DTB>9.0&&80<=DRL<90)
{
printf ("HOC_BONG_GIOI")
}




  return 0;
}