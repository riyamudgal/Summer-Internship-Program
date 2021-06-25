#copy
#swap
#toLower
#toUpper

#include<iostream>
#inclde<string>
using namespace std;

int main()
{
    string str,str2,str3,ch;

    getline(cin,str);                               // Taking string input using getline()
    cout<<"The initial string is -> ";
    cout<<str<<endl;
	
    char ch[80];
    str1.copy(ch,13,0);                                   //// using copy() to copy elements into char array, 13 is length to be copied, 0 is position in string to start copying

    cout<<"The new copied character array is -> ";
    cout<<ch;
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
