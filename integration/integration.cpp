#include"include.cpp"
#include"trapizodial.cpp"
#include"one third.cpp"
#include"three eighth.cpp"
using namespace std;
#define pi 3.14
#define f(x) exp(x*x)
int main()
{
    int i,n,z;
    float a,b,h,x[n],y[n];
    cout<<fixed<<setprecision(4);
    cout<<"\nEnter value of number of interval(n) :";
    cin>>n;
    cout<<"\nEnter value of a :";
    cin>>a;
    cout<<"\nEnter value of b :";
    cin>>b;
    

    h=((b-a)/n);
    x[0]=a;
    x[n]=b;
    y[0]=f(a);
    y[n]=f(b);

    for(i=1;i<n;i++)
    {
      x[i]=x[i-1]+h;
      y[i]=f(x[i]);
    }
    cout<<"\nX:\t\t\t\tY:";
    for(i=0;i<=n;i++)
    {
      cout<<endl<<x[i]<<"\t\t\t\t"<<y[i];
    }
    cout<<"\n\tintegration using trapizodial rule is "<<trap(y,n,h);
    cout<<"\n\tintegration using simpson's 1/3 rule is "<<onethird(y,n,h);
    cout<<"\n\tintegration using simpson's 3/8 rule is "<<threeighth(y,n,h);
    return 0;
}