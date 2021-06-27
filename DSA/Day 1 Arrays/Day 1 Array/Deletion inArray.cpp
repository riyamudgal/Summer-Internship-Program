#include<iostream>
using namespace std;

int main()
{
  int n;
  cin>>n;
  int arr[n],element,i,j;
  for(i=0;i<n;i++)
  {
     cin>>arr[i];
  }
  cout<<"Array elements are : "<<endl;
  for(i=0;i<n;i++)
  {
     cout<<arr[i]<<endl;
  }
  cout<<endl<<"Enter the element which you want to delete ->";
  cin>>element;
  
  for (i=0; i<n; i++)
    if (arr[i] == element)
        break;
 
if ( i < n)
{
    n=n-1;
    for(j=i; j<n; j++)
        arr[j] = arr[j+1];
}
cout<<endl<<"Array after deletion ->"<<endl;
for(i=0;i<n;i++)
  {
     cout<<arr[i]<<endl;
  }
  
    return 0;
  }
