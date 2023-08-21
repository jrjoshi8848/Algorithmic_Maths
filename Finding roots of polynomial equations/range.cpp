#include"include.cpp"
int range(float a[],int l)
{
    int ra,i;
    float x,y,z,r;
 for(int i=l-1;i>=0;i--)
 {
   if(i<2)
   {

   }
    if(a[i]==0)
    continue;
    else if(a[i]!=0 && a[i-1]==0 && a[i-2]==0)
    {
       cout<<"\nMethod is not suitable for finding range.";
       break;
    }
    else
    {
     x=a[i-1]/a[i];
     y=a[i-2]/a[i];
     z=pow(x,2);
     if(z-2*y<0)
     {
      cout<<"\nroot is imaginary.\nCan't determine range";
      break;
     }
     else
     {
     r=sqrt(z-2*y);
     ra=((int)r)+1;
     return ra;
     }
    };
  }
  return -1000000;
}