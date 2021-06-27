#include<iostream>
using namespace std;

int main()
{
  int n;
  cin>>n;
  int arr[n],element,pos;
  for(int i=0;i<n;i++)
  {
     cin>>arr[i];
  }
  cout<<"Array elements are : "<<endl;
  for(int i=0;i<n;i++)
  {
     cout<<arr[i]<<endl;
  }
    return 0;
  }
