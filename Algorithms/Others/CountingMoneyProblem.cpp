#include <bits/stdc++.h>
using namespace std;

int x[] = { 1, 2, 5 ,10, 20, 50, 100 , 200, 500, 1000 };
int n = sizeof(x) / sizeof(x[0]);

void findMin(int V)
{
    sort(x, x + n);
    vector<int> ans;
    for (int i = n - 1; i >= 0; i--) {


        while (V >= x[i]) {
            V -= x[i];
            ans.push_back(x[i]);
        }
    }

    for (int i = 0; i < ans.size(); i++)
        cout << ans[i] << " ";
}


int main()
{
    int n = 769;
    cout << "Following is minimalnumber of change for " << n<< ": ";
    findMin(n);
    return 0;
}
