#include<iostream>

using namespace std;

class sample
{

  public:
  int a,b,c,d;
  void func(int a)

   {
       cout<<"This is Function\n";
   }

     void func(int a,int b)

    {
       cout<<"This is Function\n";
    }

     void func(int a,int b,int c)

    {
       cout<<"This is Function\n";
    }

    void func(int a,int b,int c,int d)
    {
      cout<<"This is Function\n";
    }

};

int main()

{

int a,b,c,d;
 sample s;
 s.func(a);
s.func(a,b);

s.func(a,b,c);
s.func( a,b,c,d);




 return 0;
}


