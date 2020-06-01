#include<iostream>

using namespace std;

class A{
  private:
    int a;
    int b;

  public:
    void getdata(int x,int y)
    {
    a=x;
    b=y;
    }
    void putdata()
    {
    cout<<a<<" "<<b;
    }
   A operator+(A c)
   {
     A temp;
     temp.a=a+c.a;
     temp.b=b+c.b;
    return(temp);
   }


};

int main()
{
A c1,c2,c3;

c1.getdata(3,4);
c2.getdata(2,3);
c3=c1+c2;
c3.putdata();


return 0;
}
