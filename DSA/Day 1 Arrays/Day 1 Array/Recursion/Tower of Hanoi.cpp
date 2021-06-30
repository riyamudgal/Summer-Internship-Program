#include <iostream>
using namespace std;

void tower(int n, char source, char destination, char middle) 
{ 
    
    if (n == 1) 
    { 
        cout<<endl<<"Move disk 1 from rod"<<source<<" to rod "<<destination<<endl; 
        return; 
    } 
    
    tower(n - 1, source, middle, destination); 
    cout<<"Move disk "<<n<<" from rod "<<source<<" to rod "<<destination<<endl; 
    tower(n - 1, middle, destination, source); 
} 
int main() 
{ 
    int n;
    cout<<"Enter the number of disks you have in a rod-> ";
    cin>>n;
    cout<<endl<<"Here are the steps to be taken ->";
    tower(n, 'A', 'C', 'B');  
    return 0; 
} 

