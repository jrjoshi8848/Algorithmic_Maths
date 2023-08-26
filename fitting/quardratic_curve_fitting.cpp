#include"include.cpp"
int main()
{
    int i,j,n;
    float x[100],y[100],a0,a1,a2,sumx,sumx2,sumx3,sumx4,sumy,sumxy,sumx2y,del,del0,del1,del2;
    cout<<fixed<<setprecision(2);

    cout<<"\nEnter no of data points : ";
    cin>>n;
    for(i=0;i<n;i++)
    {
        cout<<"x["<<i<<"]=";
        cin>>x[i];
        cout<<"y["<<i<<"]=";
        cin>>y[i];
    }
    for(i=0;i<n;i++)
    {
      sumx=sumx + x[i];
      sumx2=sumx2 + x[i]*x[i];
      sumx3=sumx3+x[i]*x[i]*x[i];
      sumx4=sumx4+x[i]*x[i]*x[i]*x[i];
      sumy=sumy+y[i];
      sumxy=sumxy+x[i]*y[i];
      sumx2y=sumx2y+x[i]*x[i]*y[i];
      
   }
   
   del=n*(sumx2*sumx4-sumx3*sumx3)-sumx*(sumx*sumx4-sumx3*sumx2)+sumx2*(sumx*sumx3-sumx2*sumx2);
   del0=sumy*(sumx2*sumx4-sumx3*sumx3)-sumx*(sumxy*sumx4-sumx3*sumx2y)+sumx2*(sumxy*sumx3-sumx2*sumx2y);
   del1=n*(sumxy*sumx4-sumx3*sumx2y)-sumy*(sumx*sumx4-sumx3*sumx2)+sumx2*(sumx*sumx2y-sumxy*sumx2);
   del2=n*(sumx2*sumx2y-sumxy*sumx3)-sumx*(sumx*sumx2y-sumxy*sumx2)+sumy*(sumx*sumx3-sumx2*sumx2);
   
   if(del==0)
   {
     cout<<"Determinant is zero.\nCan't apply cramers rule";
     exit(0);
   }

   a0=del0/del;
   a1=del1/del;
   a2=del2/del;
   
   if(a1>0 && a2>0)
   cout<<"\nRequired expression is "<<a0<<"+"<<a1<<"x+"<<a2<<"x^2";
   else if(a1>0 && a2<0)
   cout<<"\nRequired expression is "<<a0<<"+"<<a1<<"x"<<a2<<"x^2";
   else if(a1<0 && a2>0)
   cout<<"\nRequired expression is "<<a0<<""<<a1<<"x+"<<a2<<"x^2";
   else if(a1<0 && a2<0)
   cout<<"\nRequired expression is "<<a0<<a1<<"x"<<a2<<"x^2";

   return 0;
}