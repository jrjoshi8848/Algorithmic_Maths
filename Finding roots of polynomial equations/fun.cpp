#include"include.cpp"
using namespace std;
float fun(float a[],int l,float x)
{
    float value=0;
    for(int i=0;i<=l;i++)
    {
     value+=(a[i]*pow(x,i));
    }
    return value;
}