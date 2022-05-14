#include<iostream>
using namespace std;

int main()
{
    int x;
    float y, sum =0.0, count=0.0;
    cout<<"How many subject you want to take: "<<endl;
    cin>>x;
    for (int  i = 1; i <= x; i++)
    {
        cout<<"Enter the "<<i<<" subject mark: "<<endl;
        cin>>y;
        sum += y;
        count++;
    }
    float avg = sum/count;
    if(avg >= 85 && avg <= 100)
    {
        cout<<"Your Grade: A"<<endl;
    }
    else if(avg >= 80 && avg <= 84.9)
    {
        cout <<"Your Grade : A-"<<endl;
    }
    else if(avg >= 75 && avg <= 79.9)
    {
        cout<<"Your Grade: B+"<<endl;
    }
    else if (avg >= 70 && avg <= 74.9)
    {
        cout << "Your Grade: B" << endl;
    }
    else if (avg >= 65 && avg <= 70.9)
    {
        cout << "Your Grade: B-" << endl;
    }
    else if (avg >= 60 && avg <= 64.9)
    {
        cout << "Your Grade: C+" << endl;
    }
    else if (avg >= 55 && avg <= 59.9)
    {
        cout << "Your Grade: C" << endl;
    }
    else if (avg >= 50 && avg <= 54.9)
    {
        cout << "Your Grade: C-" << endl;
    }
    else if (avg >= 45 && avg <= 49.9)
    {
        cout << "Your Grade: D+" << endl;
    }
    else if (avg >= 40 && avg <= 44.9)
    {
        cout << "Your Grade: D" << endl;
    }
    else if (avg >= 0 && avg <= 39.9)
    {
        cout << "Your Grade: F" << endl;
    }
    else
    {
        cout<<"You may die now."<<endl;
    }
    return 0;
}