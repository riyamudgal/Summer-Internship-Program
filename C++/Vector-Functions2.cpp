#sort function
#unique function
#distance function

#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
   vector<int> vec;
   vec.push_back(56);
   vec.push_back(5);
   vec.push_back(16);
   vec.push_back(87);
   vec.push_back(90);
   vec.push_back(12);
   vec.push_back(34);
  vec.push_back(87);
   vec.push_back(34);
   vec.push_back(16);
   vec.push_back(56);
   vec.push_back(5);
   vec.push_back(87);
   vec.push_back(34);
   vec.push_back(16);

   
   for( int i =0;i<vec.size();i++)
   {
       cout<<vec[i]<<endl;
   }
   sort(vec.begin(), vec.end());
   cout<<"Vector after applying sort function->"<<endl;
    for( int i =0;i<vec.size();i++)
   {
       cout<<vec[i]<<endl;
   }
   
   cout<<"Removing duplicates from vector->"<<endl;
   sort(vec.begin(), vec.end());
    vector<int>::iterator ip;
  
    ip = unique(vec.begin(), vec.end());
    vec.resize(distance(vec.begin(), ip));
   for (ip=vec.begin();ip!=vec.end();ip++)
   {
       cout<<*ip<<endl;
   }
   return 0;
}
