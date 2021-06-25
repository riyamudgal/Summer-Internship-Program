#swap
#toLower
#toUpper

#include<iostream>
#inclde<string>
using namespace std;

int main()
{
  string str,str2,str3,ch;
cout<<"The 1st string before swapping is : ";
    cout<<str<<endl;
    cout<<"The 2nd string before swapping is : ";
    cout<<str2<<endl;
  
    str.swap(str2);
 
    cout<<"The 1st string after swapping is : ";
    cout<<str<<endl;
    cout<<"The 2nd string after swapping is : ";
    cout<<str2<<endl;
	
	cout << "Enter the String to Convert into Lowercase ->  ";
	getline(cin, str3);
	for (int i = 0; i <str3.length(); i++)
  	{
  		str3[i] = tolower(str3[i]);
  	}
	cout<< "The Given String in LowerCase -> " << str3;
    
    cout << "Enter the String to Convert into UpperCase ->  ";
	getline(cin, str3);
	for (int i = 0; i <str3.length(); i++)
  	{
  		str3[i] = toupper(str3[i]);
  	}
	cout<< "The Given String in UpperCase-> " << str3;
 
    return 0;
 
}
