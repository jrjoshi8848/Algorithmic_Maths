#include"include.cpp"
#include"fun.cpp"
#include"range.cpp"
#include"root.cpp"
int main()
{
    stack<int> xs;
    stack<float> ys;
    int i,r,l=5,l1,c[l1];
    float a[6],f[l1],x1,x2,f0,f2,f1,xa,xb,e;
    string choice="y";
  
  while(choice=="y" || choice=="Y")
  {
    for(i=0;i<=l;i++)
    {
      cout<<"\nEnter value of a"<<i<<" : ";
      cin>>a[i];
    }

    cout<<fixed<<setprecision(7);
    cout<<"\nenter value of tolerence : ";
    cin>>e;

    r=range(a,l);
    if(r==-1000000)
    goto c;
    if(r<0)
     {
       r=-1*r;
     }
    cout<<"\n\tRange of root is ["<<-1*r<<","<<r<<"]."<<endl;
    l1=2*r+1;

    cout<<"\n\n=========================================================================";


    cout<<"\n\t\tX\t\tF(x)\n";

     for(i=-r;i<=r;i++)
      {
         xs.push(i);
         cout<<"\n\t\t"<<xs.top();
         ys.push(fun(a,l,i));
         cout<<"\t\t"<<ys.top();
      }
    cout<<"\n\n=========================================================================";


    xa=xs.top();
    xs.pop();

    while(!xs.empty())
     {
       if(xs.empty())
         break;
       else 
        {
           xb=xs.top();
           xs.pop();
        }
       f1 = fun(a,l,xa);
       f2 = fun(a,l,xb);
       if (f1==0 && f2==0)
        {
            cout<<"\n\nRoot are "<<xa<<" and "<<xb;
            if(xs.empty())
              break;
            else 
              {
                 xa=xs.top();
                 xs.pop();
              }
            continue;
        }
        else if(f1==0)
          {
             cout<<"\n\nRoot is "<<xa;
             xa=xb;
             continue;
          }
        else if(f2==0)
          {
             cout<<"\n\nRoot is "<<xb;
             if(xs.empty())
               break;
             else 
              {
                 xa=xs.top();
                 xs.pop();
              }
             continue;
          }
        if((f1<0 && f2>0 || f1>0 && f2<0)&&(f1!=0 && f2!=0))
         {
           root(a,l,xb,xa,e);
         }
        xa=xb;
     }
  c:
  cout<<"\n\nWant to try another equation(Y/N) : ";
  cin>>choice;
  }
  return 0;
}