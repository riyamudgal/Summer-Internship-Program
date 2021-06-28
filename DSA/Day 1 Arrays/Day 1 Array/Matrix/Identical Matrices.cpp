#include <iostream>

using namespace std;

int main()
{
   int r1,c1,r2,c2, i, j,k, A[5][5], B[5][5],temp=0;
    cout << "Enter rows and column of matrix A : ";
    cin >> r1>> c1;
    cout << "Enter rows and column of matrix B : ";
    cin >> r2 >> c2; 
   
    cout << "Enter elements of matrix A : "<<endl;
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c1; j++)
        {
            cin >> A[i][j];
        }
    }
	cout << "Enter elements of matrix B : "<<endl;
    for (i = 0; i < r2; i++)
    {
        for (j = 0; j < c2; j++)
        {
            cin >> B[i][j];
        }
    }
    cout << "Sum of matrices"<<endl;
    for (i = 0; i < r1; i++)
    {    
         for (j = 0; j < c1; j++)
    {
            if (A[i][j] != B[i][j])
               temp=1;
    }
    }
    if(temp==0)
            cout << "Matrices are identical";
    else
            cout << "Matrices are not identical";

    return 0;
}
