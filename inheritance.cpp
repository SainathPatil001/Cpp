   

#include<iostream>

using namespace std;

class sample1

{

    public:

    void add()

    {

        int a,b,sum;

        cout<<"Enter two Numbers: ";

        cin>>a>>b;

        sum=a+b;

        cout<<"Sum of two numbers is: "<<sum;

    }

};

class sample2:public sample1

{

};

int main()

{

    sample2 s2;

    s2.add();

    return 0;

}
