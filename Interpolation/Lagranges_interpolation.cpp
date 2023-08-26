#include<iostream>
using namespace std;
float inter(float x[],float y[],float xp,int l)
{
    float p,yp=0;
for(int i=0;i<l;i++)
    {
        p=1;
        for(int j=0;j<l;j++)
        {
            if(i!=j)
            p=p*((xp-x[j])/(x[i]-x[j]));
            else 
            continue;
        }
     yp=yp+p*y[i];
    }
    return yp;
}
int main()
{
    int i,j,l,m=0;
    float xp,x[150],y[150],p,yp=0;
    cout<<"\nEnter number of data : ";
    cin>>l;
    cout<<"\nEnter data : ";
    for(i=0;i<l;i++)
       {
        cout<<"\nx"<<i<<" : ";
        cin>>x[i];
        cout<<"\ny"<<i<<" : ";
        cin>>y[i];
       }
    while(m==0)
    {
    cout<<"\nEnter interpolation point : ";
    cin>>xp;
    cout<<"Interpolated value at "<<xp<<" is "<<inter(x,y,xp,l);
    cout<<"\nEnter 0 to interpolate again : ";
    cin>>m;
    }
    return 0;
}