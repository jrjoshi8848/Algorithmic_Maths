#include"include.cpp"
float threeighth(float y[],int n,float h)
{
  float val=0;
  val=y[0]+y[n];
  for(int i=1;i<n;i++)
  {
    if(i%3==0)
    val=val+2*y[i];
    else
    val=val+3*y[i];
  }
   val=val*(3*h/8);
  return val;
}