#include <iostream>
using namespace std;
 
int search(int arr[], int n, int x)
{
    int i;
    for (i = 0; i < n; i++)
        if (arr[i] == x)
            return i;
    return -1;
}

int main(void)
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
  cout<<endl<<"Enter the element you want to search ->";
  cin>>element;
  
    int result = search(arr, n, element);
    if(result == -1)
    {
      cout<<endl<< "Element is not present in array";
      }
  else
  {
     cout<<endl<< "Element is present at index "<<result;
  }
  return 0;
}
