/*#include<iostream>

using namespace std;

int main()
{
    int x;

    cout<<"Enter an integer value: "<<endl;
    cin>>x;

    while(x < 10)
    {
        cout<< x <<"st integer value is : "<< x <<endl;
        x++;

        while( x==2)
        {
            cout<<x<<"nd integer value is : "<< x <<endl;
            x++;

            while(x==3)
            {
                cout<<x<<"rd integer value is : "<< x <<endl;
                x++;

                while(x>=4 && x<=10)
                {
                    cout<<x<<"th integer value is : "<< x <<endl;
                    x++;
                }
            }
        }
    }
}*/

#include<iostream>

using namespace std;

int main()
{
    int x;

    cout<<"Enter an integer value : "<<endl;
    cin>> x;

    for(x ; x <=10 ; x++)
    {
        while(x==1)
        {
            cout<<x<<"st integer value is : "<<x<<endl;
            x++;
        }
        while(x==2)
        {
            cout<<x<<"nd integer value is : "<<x<<endl;
            x++;

            while(x==3)
            {
                cout<<x<<"rd integer value is : "<< x <<endl;
                x++;

                while(x>=4 && x<=10)
                {
                    cout<<x<<"th integer value is : "<< x <<endl;
                    x++;
                }
            }
        }
    }
}
