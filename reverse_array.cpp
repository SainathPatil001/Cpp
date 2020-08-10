#include<iostream>

using namespace std;


int main()
{

    int Elements;
     cout<<"Enter the no of Elements in array: "<<endl;
     cin>>Elements;
    int arr[Elements];
     cout<<"Enter Elements:"<<endl;
     for(int i=0;i<Elements;i++)
     {
          cin>>arr[i];
     }
     int start=0;
     int End=Elements-1;


     while(start<End)
     {
        int temp;
        temp=arr[start];
        arr[start]=arr[End];
        arr[End]=temp;
        start++;
        End--;
     }

       cout<<"Reversed array is:"<<endl;
     for(int i=0;i<Elements;i++)
     {
          cout<<arr[i]<<endl;
     }
  return 0;
}
