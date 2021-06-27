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
  cout<<endl<<"Enter the element you want to insert ->";
  cin>>element;
  cout<<endl<<"Enter the position at which you want to insert the element ->"<<endl;
  cin>>pos;
  
  if(pos>=n)
    {
      cout<<"Array out of bound";
    }
  n++;
  for( int i=n-1;i>=pos-1;i--)
  {
      arr[i+1]=arr[i];
      arr[pos - 1] = element;
    
  }
    cout<<"New Array is "<<endl;
    for( int i=0;i<n;i++)
    {
      cout<<arr[i]<<endl;
    }
  
    return 0;
  }
 
  
