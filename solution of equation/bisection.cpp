#include<iostream>
#include<iomanip>
#include<cmath>
#define f(x) pow(x,3)-3*x+1
using namespace std;
int main()
    {
        int a,it=0;
        float px,x0,x1,x2,f0,f1,f2,error,e=1000000;
        cout<<fixed<<setprecision(5);

       cout<<"Initial guess values :\nX1=";
       cin>>x1;
       cout<<"\nX2=";
       cin>>x2;
       p:
       cout<<"\nTolerence =";
       cin>>error;

       if(error==0)
       {
       cout<<"Tolerence can't be zero";
       goto p;
       }
       
       f1=f(x1);
       f2=f(x2);

       if(f1*f2>0)
       {
       cout<<"There is no root between initial guess values.";
       return 0;
       }
       x0=(x1+x2)/2;
       cout<<"\nIteration\tX1\t\tY1\t\tX2\t\tY2\t\tX0\t\tY0\t\tError\n";
       cout<<endl<<it<<"              "<<x1<<"        "<<f1<<"        "<<x2<<"       "<<f2<<"          "<<x0<<"        "<<f0;
       while(e>=error)
       {
          if (f(x1)*f(x0)<0)
		     x2=x0;	
	      else
	         x1=x0;

          f1=f(x1);
          f2=f(x2);
          px=x0;
          x0=(x1+x2)/2;
          f0=f(x0);
          it++;
          e=x0-px;

          if(e<0)
          e=-1*e;

          cout<<endl<<it<<"              "<<x1<<"        "<<f1<<"        "<<x2<<"       "<<f2<<"          "<<x0<<"        "<<f0<<"          "<<e;
	   }
       cout<<"\n\nIn Iteration "<<it<<" error is less then "<<error<<".\nSo required root is "<<x0<<"\n\n";

      cin>>a;
    }
