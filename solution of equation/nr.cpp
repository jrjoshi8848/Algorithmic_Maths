#include<iostream>
#include<iomanip>
#include<cmath>
#define f(x) pow(x,3)-3*x+1
#define g(x) 3*x*x-3
using namespace std;
int main()
    {
        int a,maxit,it=0;
        float px,x0,x1,x2,f0,f1,gx,error,e=1000000;
        cout<<fixed<<setprecision(5);

       cout<<"Initial guess values X1=";
       cin>>x1;
       p:
       cout<<"\nTolerence =";
       cin>>error;
       
       if(error==0)
       {
       cout<<"Tolerence can't be zero";
       goto p;
       }
       
       cout<<"\nIteration\tX1\t\tY1\t\tX0\t\tY0\t\tError\n";
       do
       {

          f1=f(x1);
          gx=g(x1);
          if(gx==0)
          {
            cout<<"f'(x) is zero\nCan't use Newton-Raphson method.";
            exit(0);
          }
          x0=x1-f1/gx;
          f0=f(x0);
          e=x0-x1;
          it++;

          if(e<0)
          e=-1*e;

          cout<<endl<<it<<"              "<<x1<<"        "<<f1<<"          "<<x0<<"        "<<f0<<"          "<<e;
          x1=x0;
	   }while(e>=error);
       cout<<"\n\nIn Iteration "<<it<<" error is less then "<<error<<".\nSo required root is "<<x0<<"\n\n";

      cin>>a;
    }
