/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
   int r1,c1,i, j, A[5][5],B[5][5],temp=0;
    cout << "Enter rows and column of matrix A : ";
    cin >> r1>> c1;
   
    cout << "Enter elements of matrix A : "<<endl;
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c1; j++)
        {
            cin >> A[i][j];
        }
    }
for (i = 0; i < r1; i++)
{
        for (j = 0; j < c1; j++)
        {
            B[i][j] = A[j][i];
        }
}
cout<<"Transposed Matrix is "<<endl;
  for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c1; j++)
        {
           cout <<" "<< B[i][j];
        }
        cout <<endl;
    }

    return 0;
}
