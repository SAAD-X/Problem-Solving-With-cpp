#include<iostream>
using namespace std;

int main()
{
    int mimo[10]= {8,4,6,1,6,9,6,1,9,8};
    int i,n,a=0, flag = 0;

    cout<< "Input a number to search:";
    cin>>n;

    for (i = 0; i < 10; i++)
    {
        if(n==mimo[i])
        {
            a++;
            flag = 1;
        }
    }
    if (flag == 0)
    {
        cout<<"Element not found"<<endl;
    }
    cout<<"The number occurs "<<a<<" times in the array"<<endl;
    return 0;
}