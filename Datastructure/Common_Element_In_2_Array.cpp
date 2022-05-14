#include<iostream>
using namespace std;
int main()
{
    int A[5]={1,2,3,4,10};
    int B[7]={2,4,6,8,10,12,14};
    int C[12],i,j,k=0,x,count;
    cout<<"Elements of A: "<<endl;;
    for(i=0;i<5;i++)
    {
            cout<<A[i]<<" ";
    }
    cout<<""<<endl;
    cout<<"Elements of B: "<<endl;
    for(i=0;i<7;i++)
    {
        cout<<B[i]<<" ";
    }
    for(i=0; i<5; i++)
    {
        for(j=0; j<7; j++)
        {
            if(A[i]==B[j])
            {
                count = 0;
                for(x=0; x<k; x++)
                {
                    if(A[i]==C[x])
                        count++;
                }
                if(count==0)
                {
                    C[k] = A[i];
                    k++;
                }
                else
                {
                    cout<<"No common element";
                }
            }
        }
    }
    cout<<""<<endl;
    cout<<"Common elements:";
    for(i=0;i<k;i++)
    {
        cout<<C[i]<<" ";
    }
    return 0;
}