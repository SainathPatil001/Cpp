//This is The Coding Area
#include<iostream>

using namespace std;

void str(string s,int pthloc)
{

int count=0;
   for(int i=pthloc-2;i>=0;i--)
   {

      char ch0=s.at(i);
       char ch1=s.at(pthloc-1);
     if(ch0==ch1)
     {
     count=count+1;
     }

   }
 cout<<count<<"\n";





}
int main()
{

 int length,test_cases,pthloc;
  string s;
  cin>>length>>s>>test_cases;




   for(int i=0;i<test_cases;i++)
   {

        cin>>pthloc;
      str(s,pthloc);

   }

return 0;
}
