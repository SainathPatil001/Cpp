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
   int res=1;
  for(int i=1;i<Elements;i++)
  {

    if(arr[res-1] != arr[i])
       {
          arr[res]=arr[i];
            res++;
       }



  }
  cout<<res<<endl;
    cout<<"Updated Result: ";
     for(int i=0;i<res;i++)
       {
        cout<<arr[i]<<" ";
       }




return 0;
}
