#include<iostream>

using namespace std;
class A{
        private: static int a;

        public:
            static void fun()
            {
            cout<<"The value of A is:"<<a;
            }
};
int A::a=10;
int main()
{

   A::fun();

   return 0;



}
