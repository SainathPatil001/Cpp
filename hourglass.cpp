#include <iostream>

using namespace std;



int main()
{

     int sum,max=INT_MIN,arr[6][6];

    for(int row=0;row<6;row++)
    {
        for(int col=0;col<6;col++)
        {
            cin>>arr[row][col];
        }

    }
    for(int row=0;row<4;row++)
    {
        for(int col=0;col<4;col++)
        {

          sum=(arr[row][col]+arr[row][col+1]+arr[row][col+2])+
          (arr[row+1][col+1])+
        ( arr[row+2][col]+arr[row+2][col+1]+arr[row+2][col+2]);


        }
      if(sum>max)
      {

          max=sum;
      }

    }

       cout<<max;

    return 0;
}
