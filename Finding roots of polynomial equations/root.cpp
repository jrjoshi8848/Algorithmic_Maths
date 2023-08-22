#include"include.cpp"
void root(float a[],int l,float x1,float x2,float e)
{  int it=0;
    float px,x,f0,f1,f2,error;
    px=x1;
    x=(x1+x2)/2;
    f0=fun(a,l,x);
    f1=fun(a,l,x1);
    f2=fun(a,l,x2);
    
   cout<<"\n\n\t=> There is root between "<<x1<<" and "<<x2<<".\n\nBisection table is :";
   cout<<"\n\n\nIteration       X1             f1            x2           f2             x            f0             Error";
   it++;
   cout<<"\n\n     "<<it<<"      "<<x1<<"     "<<f1<<"    "<<x2<<"    "<<f2<<"    "<<x<<"    "<<f0;
   do
   {
   if(f0<0 && f1<0 && f2>0)
   {
    x1=x;
    f1=f0;
   }
   else if(f0<0 && f2<0 && f1>0)
   {
    x2=x;
    f2=f0;
   }
   else if(f0>0 && f2>0 && f1<0)
   {
    x2=x;
    f2=f0;
   }
   else if(f0>0 && f1>0 && f2<0)
   {
    x1=x;
    f1=f0;
   }
    px=x;
    x=(x1+x2)/2;
    f0=fun(a,l,x);
    error=x-px;
    if(error<0)
    error=-1*error;
    it++;
    cout<<"\n     "<<it<<"      "<<x1<<"     "<<f1<<"    "<<x2<<"    "<<f2<<"    "<<x<<"    "<<f0<<"       "<<error;
   }while(error>=e);
cout<<"\n\n\n\t# In iteration "<<it<<" error is less then "<<e<<" So requies root is "<<x;
cout<<"\n\n=======================================================================================================";

}