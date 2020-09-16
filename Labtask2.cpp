// no---1

#include<iostream>

#include<string>

using namespace std;

class Student
{
private:
    string student_name ;
    string student_id ;
public :
    string number_of_course ;
    floar cgpa ;

void setStudentName (string nam)
        {
            student_name = nam;
        }
        string getStudentName()
        {
            return student_name;
        }
void setStudentID (string num)
        {
            student_id = num;
        }
        string getStudentID()
        {
            return student_id;
        }
};



int main ()

{
    Student stu1, stu2 ;

    stu1 . student_name = "RAKIN SAD AFTAB";
    stu1 . student_id = "20-41991-1";


    cout<<"Student Name : "<<stu1 . student_name<<endl;
    cout<<"Student ID : "<<stu1 .student_id<<endl;



    stu2 . student_name = "HASAN AHMED";
    stu2 . student_id = "20-41987-1";



    cout<<"Student Name : "<<stu2 . student_name<<endl;
    cout<<"Student ID : "<<stu2 .student_id<<endl;

}
