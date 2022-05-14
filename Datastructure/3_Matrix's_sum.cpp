#include<iostream>

using namespace std;

int main()
{
    int r,c, a[100][100], b[100][100], d[100][100], sum[100][100], i , j;

    cout<<"Enter number of rows: "<<endl;
    cin>>r;

    cout<<"Enter number of columns: "<<endl;
    cin>>c;

    cout<<"Enter the elements of 1st matrix"<<endl;

    for (i = 0; i < r; ++i)
    {
        for (j = 0; j < c; ++j)
        {
            cout<<"Enter element a"<<i+1<<j+1<<" :";
            cin>>a[i][j];
        }
    }

    cout<<"Enter the elements of 2nd matrix"<<endl;

    for (i = 0; i < r; ++i)
    {
        for (j = 0; j < c; ++j)
        {
            cout<<"Enter element b"<<i+1<<j+1<<" :";
            cin>>b[i][j];
        }
    }
    
    cout<<"Enter the element of 3rd matrix: "<<endl;

    for (i = 0; i < r; ++i)
    {
        for (j = 0; j < c; ++j)
        {
            cout<<"Enter element d"<<i+1<<j+1<<" :";
            cin>>d[i][j];
        }
    }

    for (i = 0; i < r; ++i)
    {
        for (j = 0; j < c; ++j)
        {
            sum[i][j] = a[i][j] + b[i][j] + d[i][j];
        }
    }
    
    cout<<"Sum of three matrix is: "<<endl;
    for (i = 0; i < r; ++i)
    {
        for (j = 0; j < c; ++j)
        {
            cout<<sum[i][j]<<"  ";

            if (j == c-1)
            {
                cout<<endl;
            }
        }
    }
    
    return 0;
}