#include<iostream>



using namespace std;

int main()
{
  int a,b,H;
  cin>>a>>b;
  for(H=a<b?a:b;H>=1;H--)
  {
    if(a%H==0 && b%H==0)
    {
        break;
    }

  }

 cout<<"HCF of number is:"<<H;


 return 0;
}
