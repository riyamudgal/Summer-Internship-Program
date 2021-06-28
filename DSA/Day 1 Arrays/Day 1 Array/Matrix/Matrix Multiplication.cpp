#include <iostream>

using namespace std;

int main()
{
   int r1,c1,r2,c2, i, j,k, A[5][5], B[5][5], C[5][5];
    cout << "Enter rows and column of matrix A : ";
    cin >> r1>> c1;
    cout << "Enter rows and column of matrix B : ";
    cin >> r2 >> c2; 
    if (c1!=r2)
    {
        cout << "Matrices cannot be multiplied!";
        exit(0);
    }	
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
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c1; j++)
        {
            C[i][j] = A[i][j] + B[i][j];
        }
    }

    cout << "Multiplication of matrices"<<endl;
    for (i = 0; i < r1; i++)
    {    
         for (j = 0; j < c1; j++)
    {
        C[i][j] = 0;
            for (k = 0; k < c1; k++)
            {
                C[i][j] += A[i][k] * B[k][j];
            }
            cout << C[i][j] << "  ";
    }
        cout << endl;
    }
    return 0;
}
