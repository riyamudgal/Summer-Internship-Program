#include <iostream>
#include<vector>
using namespace std;
int main() 
{
    vector<int> v1;
    v1.push_back(2);
    v1.push_back(3);
    v1.push_back(7);
    v1.push_back(12);
    v1.push_back(9);
    v1.push_back(19);
    v1.push_back(45);
    v1.push_back(23);
    v1.push_back(71);
    v1.push_back(11);
    
  
    cout<<"Elements of vector are- > "<<endl;
    for(vector<int> ::iterator i=v1.begin();i!=v1.end();i++)                  //using vector iterator
    cout<<*i<<endl;
    
    int s=v1.size();
    cout<<"Size of vectore- >"<<s<<endl;
    
    int a=v1.at(3);
    cout<<"Element at third index ->";
    cout<<a;
    
    int b=v1.back();
    cout<<"Last element -> "<<b<<endl;
    
    int c=v1.front();
    cout<<"First Element ->"<<c;
  
    v1.pop_back();
   cout<<"Vector after pop operation - > "<<endl;
   for(int i=0;i<v.size();i++)                      //common way of accessing elements
       {
           cout<<v[i]<<endl;
       }
    

    return 0;
}
