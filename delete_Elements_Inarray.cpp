#include<iostream>


using namespace std;

int delete_The_element(int arr[],int Elements,int no_to_delete)
{
   int i;

   for(i=0;i<Elements;i++)
    {

       if(arr[i]==no_to_delete)
       {
           break;
       }

    }
   if(i==Elements)
   {
     return Elements;
   }

   for(int j=i;j<Elements-1;j++)
   {

       arr[j]=arr[j+1];

   }
    cout<<"Elements updated are:";
  for(int k=0;k<Elements-1;k++)
  {
    cout<<arr[k]<<" ";
  }
  cout<<endl;
   return (Elements-1);
}
int main()
{
     int Elements;
     int no_to_delete;
     cout<<"Enter the no of Elements in array: "<<endl;
     cin>>Elements;
     int arr[Elements];
     cout<<"Enter Elements:"<<endl;

     for(int i=0;i<Elements;i++)
     {
          cin>>arr[i];
     }
     cout<<"Enter The non to be Deleted"<<endl;
     cin>>no_to_delete;
     cout<<"The size after deletion is "<<delete_The_element(arr,Elements,no_to_delete);

    return 0;
}
