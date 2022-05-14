#include<iostream>

using namespace std;

int main()
{
    int r,c,i,j;
    cout<<"Enter the size of rows and column:"<<endl;
    cin>>r>>c;
    int matrix[r][c];
    int trans[c][r];

            cout
        << "Enter the values of row and column: " << endl;
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            cin>>matrix[i][j];
        }
    }
    
    cout<<"Main Matrix is: "<<endl;
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }

    for (i = 0; i < c; i++)
    {
        for (j = 0; j < r; j++)
        {
            trans[i][j] = matrix[j][i];
        }
    }
    cout <<"The Transpose Matrix of the Main Matrix is: " << endl;
    for (i = 0; i < c; i++)
    {
        for (j = 0; j < r; j++)
        {
            cout << trans[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}