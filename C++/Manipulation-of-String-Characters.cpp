#include <iostream>
#include <string>
using namespace std;

int main() {
	
  string s1,s2,s3;
  int n1,n2,i;
  cin>>s1;
  cin>>s2;
  n1=s1.length();
  n2=s2.length();
  cout<<n1<<" "<<n2;
  cout<<endl;
  s3=s1+s2;
  cout<<s3;
  cout<<endl;

    s1[0]=s2[0];
    cout<<s1;   
       s1[0]=s3[0];  
      s2[0]=s1[0];
  
  cout<<" "<<s2;
    return 0;
}
