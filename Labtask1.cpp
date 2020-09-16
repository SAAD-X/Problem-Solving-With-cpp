#include<iostream>
#include<string>
using namespace std;

class Employee
{



private :
    string employee_id ;
    string employee_name ;
    string designation;
    float salary ;

public :
    void getEmployee ()
    {
        cout<<"Enter Employee ID : "<<endl;
        cin>>employee_id;
        cout<<"Enter Employee Name : "<<endl;
        cin>> employee_name ;
        cout<<"Enter the designation : "<<endl;
        cin>> designation;
        cout<<"Enter employee's salary : "<<endl;
        cin>> salary ;
    }
    void showEmployee()
    {
        cout<<"ID is :"<<employee_id<<endl;
        cout<<"Name is : "<<employee_name<<endl;
        cout<<"designation is :"<<designation<<endl;
        cout<<"Salary is : "<<salary<<endl;
    }
    void showorder(Employee e2 , Employee e3)
    {
        cout<<salary<<endl;
        cout<<e2 . salary<<endl;
        cout<<e3 . salary<<endl;

        if(salary > e2 . salary && salary > e3 . salary)
        {
            if(e2 . salary > e3 . salary)
            {
                cout<<designation<< " "<<e2 .designation<< " "<< e3 . designation<<endl;
            }
            else
            {
                cout<<designation<< " "<<e3 . designation<< " "<< e2 . designation<<endl;
            }
        }
        else if (e2 .salary > salary && e2 .salary > e3 . salary)

        {
            if(e3 . salary >  salary)
            {
                 cout<<e2 . designation<< " "<<e3 .designation<< " "<< designation<<endl;
            }
            else
            {
               cout<<e2 . designation<< " "<<designation<< " "<< e3 . designation<<endl;
            }
        }
        else if(e3 .salary > salary && e3 .salary > e2 . salary)
        {
            if(salary > e2 . salary)
            {
                 cout<<e3 . designation<< " "<<designation<< " "<<e2 . designation<<endl;
            }
            else
            {
                 cout<<e3 . designation<< " "<<e2 .designation<< " "<< designation<<endl;
            }
            }
            }




    };
int main()
{


cout<<"First Object"<<endl;
Employee emp1;
//cout<<"Calling get employee method"<<endl;
emp1 . getEmployee();
//cout<<"Calling show employee method"<<endl;
emp1 . showEmployee();
cout<<"Second Object"<<endl;
Employee emp2;
cout<<"Third Object"<<endl;
Employee emp3;

emp2 . getEmployee();
emp2 . showEmployee();

emp3 . getEmployee();
emp3 . showEmployee();

cout<<"Calling the order methods"<<endl;
emp1 . showorder(emp2 , emp3);


}

