#include<iostream>

using namespace std;

int main()
{
    int array_1[5]={10,20,30,40,50};
    int array_2[8]={1,2,3,4,5,6,7,8};
    int array_3[13];
    for (int i = 0; i < 13; i++)
    {
        if(i<5)
        {
            array_3[i]=array_1[i];
        }
        else
        {
            array_3[i]=array_2[i-5];
        }
    }
    for (int i = 12; i >= 0; i--)
    {
        cout<<array_3[i]<<" ";
    }
    return 0;
}