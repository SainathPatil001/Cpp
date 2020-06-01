#include<iostream>


using namespace std;


int main()
{
    int arr[]={1,5,4,3,2};

    int size=5;
    int temp;
    for(int i=0;i<size-1;i++)
    {
        for(int j=0;j<size-i-1;j++)
        {
           if(arr[j]>arr[j+1])
           {
            temp=arr[j];
              arr[j]=arr[j+1];
              arr[j+1]=temp;

           }
        }
    }
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<endl;
    }
    return 0;
}
