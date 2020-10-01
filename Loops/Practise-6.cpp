//6. Write a program in C++ to find prime number within a range.

#include <iostream>
#include<math.h>
using namespace std;
int main()
{
	int num1,num2;
    int k=0,l=0;

	cout << " Enter an integer where you want to start : ";
	cin>> num1;
	cout << " Enter an integer where you want to stop  : ";
	cin>> num2;

	cout << "\n The prime numbers between "<<num1<<" and "<<num2<<" are:"<<endl;
    for(int i=num1;i<=num2;i++)
       {
           for(int j=2;j<=sqrt(i);j++)
               {
               if(i%j==0)
                  l++;
               }
               if(l==0&&i!=1)
               { k++;
                 cout<<i<<" ";

               }
               l=0;
       }
 cout<<"\n\n The total number of prime numbers between "<<num1<<" to "<<num2<<" is: "<<k<<endl;
 return 1;
}
