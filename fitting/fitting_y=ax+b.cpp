#include"include.cpp"

int main()
{
 int i,n;
 float sumX=0, sumX2=0, sumY=0, sumXY=0, a, b;
 cout<<"\n\tt\tFitting of the form y=e^(ax+b).\n\n";
 cout<<fixed<<setprecision(4);
 cout<<"How many data to be feed :";
 cin>>n;
 float x[n+1], y[n+1];
 for(i=0;i<n;i++)
 {
  cout<<"x["<<i<<"]=";
  cin>>x[i];
  cout<<"y["<<i<<"]=";
  cin>>y[i];
 }
 
 for(i=0;i<n;i++)
 {
  sumX = sumX + x[i];
  sumX2 = sumX2 + x[i]*x[i];
  sumY = sumY + y[i];
  sumXY = sumXY + x[i]*y[i];
 }
 
 b = (n*sumXY-sumX*sumY)/(n*sumX2-sumX*sumX);
 a = (sumY - b*sumX)/n;
 
 cout<<"The equation is y="<<a<<"x+"<<b<<".";
 return(0);
}
