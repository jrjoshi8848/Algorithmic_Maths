#include"include.cpp"
#include"display_table.cpp"
int main()
{
    int i,j,n,it=0;
    float x[100],y[100][100],h,s,p,px,m=1;

    cout<<fixed<<setprecision(2);
    cout<<"Enter no of data points : ";
    cin>>n;
    cout<<"Enter point of interpolation(x) : ";
    cin>>p;
    cout<<"enter data :\n";
    for(i=0;i<n;i++)
    {
        cout<<"x["<<i<<"]=";
        cin>>x[i];
        cout<<"y["<<i<<"]=";
        cin>>y[i][0];
    }
    for(j=1;j<n;j++)
    {
        for(i=0;j<n-i;i++)
           {
              y[i][j] = y[i+1][j-1] - y[i][j-1];
           }
    }

    cout<<"\nFORWARD DIFFERENCE TABLE\n\n";

   display(x,n,y);
    
    h=x[1]-x[0];
    s=(p-x[0])/h;
    px=y[0][0];
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<=i;j++)
        {
         m=m*(s-j)/(j+1);
        }
     px=px+m*y[0][i+1];
     m=1;
    }
    cout<<"\n\tp("<<p<<")="<<px;

    return 0;
}