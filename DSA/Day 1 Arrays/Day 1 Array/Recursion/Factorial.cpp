#include <iostream>
using namespace std;

int fact(int n)
{
   if (n<=act1)
        return 1;
   else 
       return n*fact(n-1);
}
int main()
{
   int num;
   cout<<"Enter a number: ";
   cin>>num;
   cout<<"Factorial of entered number: "<<fact(num);
   return 0;
}
