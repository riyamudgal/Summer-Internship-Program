#getline
#push-back
#pop-back
#getline


#include<iostream>
#include<string> 
using namespace std;
int main()
{
    string str,str2,str3;
  
    getline(cin,str);                               // Taking string input using getline()
    cout<<"The initial string is -> ";
    cout<<str<<endl;
   
    str.push_back('s');                                  // Using push_back() to insert a character at end
    cout<<"The string after push_back operation is -> ";
    cout<<str<<endl;
 
    str.pop_back();                                 // Using pop_back() to delete a character from end
    cout<<"The string after pop_back operation is -> ";
    cout<<str<<endl;
  
    cout<<"The length of the string is :"<<str.length()<<endl;
    
    return 0;
}
