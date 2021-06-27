#include<iostream>
using namespace std;  
int binarySearch(int[], int, int, int);  
int main()  
{  
    int arr[10],i;
    cout<<"Enter array elements"<<endl;
    for(i=0;i<10;i++)
    {
        cin>>arr[i];
    } 
    cout<<"Array elements are"<<endl;
    for(i=0;i<10;i++)
    {
        cout<<arr[i];
        cout<<endl;
    } 
    int item, location=-1;   
    cout<<endl<<"Enter the item which you want to search ";  
    cin>>item;  
    location = binarySearch(arr, 0, 9, item);  
    if(location != -1)   
    {  
        cout<<"Item found at location "<<location;  
    }  
    else  
    {  
        cout<<"Item not found";  
    }  
}   
int binarySearch(int a[], int beg, int end, int item)  
{  
    int mid;  
    if(end >= beg)   
    {     
        mid = (beg + end)/2;  
        if(a[mid] == item)  
        {  
            return mid+1;  
        }  
        else if(a[mid] < item)   
        {  
            return binarySearch(a,mid+1,end,item);  
        }  
        else   
        {  
            return binarySearch(a,beg,mid-1,item);  
        }  
      
    }  
    return 0;   
}  
