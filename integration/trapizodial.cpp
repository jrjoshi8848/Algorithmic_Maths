#include"include.cpp"
float trap(float y[],int n,float h)
{
  float val=0;
  val=y[0]+y[n];
  for(int i=1;i<n;i++)
  {
    val=val+2*y[i];
  }
  val=val*(h/2);
  return val;
}