#include<iostream>
using namespace std;

int main()
{   int a,b,lcm=0;

    cin>>a>>b;
     for(lcm=a>b?a:b;lcm<=a*b;lcm=lcm+(a>b?a:b))
     {
         if(lcm%a==0 && lcm%b==0)
         {
           break;
         }
     }
     cout<<"The lcm of two numbers is "<<lcm;



   return 0;



}

