#include<iostream>

using namespace std;


void selection(int arr[], int size)
{
     int min,temp;
    for(int i=0;i<size;i++)
    {
        min=i;
        for(int j=i+1;j<size;j++)
        {
            if(arr[min]>arr[j])
                min=j;
        }

       temp=arr[min];
       arr[min]=arr[i];
       arr[i] = temp;
    }

   for(int i=0;i<size;i++)
    {
      cout<<arr[i]<<endl;


    }







}

int main()
{
    int arr[]={5,4,2,3,1};

    int size = 5;

   int n=10;
   selection(arr,size);











    return 0;
}
