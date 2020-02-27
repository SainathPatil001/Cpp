#include<iostream>
using namespace std;
class myclass
{
  int a=10,b=10,c;
   public:
    friend void sum(myclass p);
};

void sum(myclass p)
{
        p.c=p.a+p.b;

    cout<<"SUM:"<<p.c;


}
int  main()
{
   myclass c1;
   sum(c1);

   return 0;

}
