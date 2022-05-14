#include <iostream>
using namespace std;
int main()
{
    int i, num, div, z, sum = 0, j;
    cin >> z;
    for (i = 0; i < z; i++)
    {
        cin >> num;
        for (j = 1, sum = 0; j < num; j++)
        {
            div = num % j;
            if (div == 0)
                sum = sum + j;
        }
        if (sum == num)
        {
            cout << num << " eh perfeito"<<endl;
        }
        else
        {
            cout << num << " nao eh perfeito"<<endl;
        }
    }
    return 0;
}