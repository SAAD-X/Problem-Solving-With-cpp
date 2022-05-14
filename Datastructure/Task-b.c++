//Task-2
#include<iostream>
using namespace std;

int main()
{
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};

    int i,ev=0,od=0;

    for (i = 0; i < 10; i++)
    {
      
        if (arr[i] % 2 == 0)
        {
            ev++;
        }
        else
        {
            od++;
        }
    }

    cout << "Total even elements:"<<ev<<endl;
    cout << "Total odd elements:" << od << endl;

    return 0;
}