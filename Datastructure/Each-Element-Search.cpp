#include <iostream>
using namespace std;
int main()
{
    int array_1[10] = {8, 4, 6, 1, 6, 9, 6, 1, 9, 8};
    int fr[10];
    int visited = -1;

    for (int i = 0; i < 10; i++)
    {
        int count = 1;
        for (int j = i + 1; j < 10; j++)
        {
            if (array_1[i] == array_1[j])
            {
                count++;
                fr[j] = visited;
            }
        }
        if (fr[i] != visited)
        {
            fr[i] = count;
        }
    }
    for (int i = 0; i < 10; i++)
    {
        if (fr[i] != visited)
        {
            cout<<array_1[i]<< " occurs = "<<fr[i]<<" times"<<endl;
        }
    }
    return 0;
}