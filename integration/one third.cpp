#include"include.cpp"
float onethird(float y[],int n,float h)
{
  float val=0;
  val=y[0]+y[n];
  for(int i=1;i<n;i++)
  {
    if(i%2==0)
    val=val+2*y[i];
    else
    val=val+4*y[i];
  }
   val=val*(h/3);
  return val;
}