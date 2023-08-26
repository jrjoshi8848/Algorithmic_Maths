#include<iostream>
#include<iomanip>
#include<cmath>
#define f(x) pow(x,3)-3*x+1
using namespace std;
int main()
    {
        int a,it=0;
        float x0,x1,x2,f0,f1,f2,error,e=1000000;
        cout<<fixed<<setprecision(5);

       cout<<"Initial guess values :\nX0=";
       cin>>x0;
       cout<<"\nX1=";
       cin>>x1;
       p:
       cout<<"\nTolerence =";
       cin>>error;

       if(error==0)
       {
       cout<<"Tolerence can't be zero";
       goto p;
       }
       
       f0=f(x0);
       f1=f(x1);

       if(f0*f1>0)
       {
       cout<<"There is no root between initial guess values.";
       return 0;
       }
       cout<<"\nIteration\tX0\t\tY0\t\tX1\t\tY1\t\tX2\t\tY2\t\tError\n";
       do
       {
          f0=f(x0);
          f1=f(x1);
          if(f1==f0)
          {
            cout<<"Division by zero.\nexited program.";
            exit(0);
          }
          x2=x1-(x1-x0)*f1/(f1-f0);
          f2=f(x2);
          e=x2-x1;
          if(e<0)
          e=-1*e;
          cout<<endl<<it<<"              "<<x0<<"        "<<f0<<"        "<<x1<<"       "<<f1<<"          "<<x2<<"        "<<f2<<"          "<<e;
          x0=x1;
          x1=x2;
          it++;
	   }while(e>=error);
       cout<<"\n\nIn Iteration "<<it-1<<" error is less then "<<error<<".\nSo required root is "<<x2<<"\n\n";

      cin>>a;
      return 0;
    }