#include<iostream>
using namespace std;

int main()
{
    int A[100][100],B[100][100],C[100][100],D[100][100],i,j,k,r,c;
    cout << "\n\t Enter the Rows: ";
    cin >> r;
    cout << "\n\t Enter the Columns: ";
    cin >> c;
    cout << "\n\t Enter the First Matrix: \n";
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            cout << " A[" << i+1 << "][" << j+1 << "]: ";
            cin >> A[i][j];
        }
    }
    cout << "\n\t Enter the Second Matrix: \n";
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            cout << " B[" << i+1 << "][" << j+1 << "]: ";
            cin >> B[i][j];
        }
    }
    cout << "\n\t The First Matrix is: \n\t\t";
    for(i=0;i<r;i++)
    {
        cout << "\n\t";
        for(j=0;j<c;j++)
        {
            cout << "\t " << A[i][j];
        }
    }
    cout << "\n\t The Second Matrix is: \n\t\t";
    for(i=0;i<r;i++)
    {
        cout << "\n\t";
        for(j=0;j<c;j++)
        {
            cout << "\t " << B[i][j];
        }
    }
    cout << "\n\t The Mathematical Operation \n\t\t";
    do
    {
        cout << "\n\n\n\t\t 1. Addition \n\t\t 2. Subtraction \n\t\t 3. Multiplication \n\t\t 4. Division \n\t\t 5. Exit \n\t\t";
        cout << "\n\t Enter your choice: ";
        cin >> i;
        switch (i)
        {
        case 1:
            cout << "\n\t The Addition of Matrix is: \n\t\t";
            for(i=0;i<r;i++)
            {
                cout << "\n\t";
                for(j=0;j<c;j++)
                {
                    C[i][j]=A[i][j]+B[i][j];
                    cout << "\t " << C[i][j];
                }
            }
            break;
        case 2:
            cout << "\n\t The Subtraction of Matrix is: \n\t\t";
            for(i=0;i<r;i++)
            {
                cout << "\n\t";
                for(j=0;j<c;j++)
                {
                    C[i][j]=A[i][j]-B[i][j];
                    cout << "\t " << C[i][j];
                }
            }
            break;
        case 3:
            cout << "\n\t The Multiplication of Matrix is: \n\t\t";
            for(i=0; i<r; i++)
            {
                cout << "\n\t";
                for(j=0; j<c; j++)
                {
                    C[i][j] = 0;
                    for(k=0; k<r; k++)
                    {
                        C[i][j] += A[i][k] * B[k][j];
                    }
                    cout << "\t " << C[i][j];
                }
            }
            break;
        case 4: 
            cout << "\n\t The Division of Matrix is: \n\t\t";
            for(i=0;i<r;i++)
            {
                cout << "\n\t";
                for(j=0;j<c;j++)
                {
                    C[i][j]=A[i][j]/B[i][j];
                    cout << "\t " << C[i][j];
                }
            }
            break;
        case 5:
            cout << "\n\t Thank You for using this program \n\t\t";
            break;
        }
    } while (i!=5);
    return 0;
}