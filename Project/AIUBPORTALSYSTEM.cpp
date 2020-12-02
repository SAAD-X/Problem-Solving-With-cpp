/* code written by Rakin Sad Aftab */
/* If you want to run in in your suitable IDE 
   then please first open the "Massage" option.
   there you will find some writting, read it 
   and you will understand */
   


#include<iostream>

using namespace std;

int main()
{
    string name;
    string student_id;
    string id_pass;
    int option;
    int op;
    int i , j ;
    int k , b;

    cout<<"Enter your Name :"<<endl;
    cin>>name;

    cout<<"Enter Your AIUB ID :"<<endl;
    cin>>student_id;

    cout<<"Enter Your Password :"<<endl;
    cin>>id_pass;

    cout<<""<<endl;

    cout<<"AIUB\nPORTAL    "<<"Registration    "<<"Courses & result    "<<"Grade Report    "<<"Welcome "<<name<<endl;
    cout<<""<<endl;
    cout<<"-----------------------------------------------------------------------------------------------------"<<endl;

    cout<<"Academics"<<endl;
    cout<<""<<endl;

    cout<<"Grades Reports"<<endl;
    cout<<""<<endl;

    cout<<"Library"<<endl;
    cout<<""<<endl;

    cout<<"Massage"<<endl;
    cout<<""<<endl;

    cout<<"Others"<<endl;
    cout<<""<<endl;

    cout<<"You need to enter the following code given below for accessing"<<endl;
    cout<<""<<endl;

    cout<<"Enter [1] for [Academics]"<<endl;
    cout<<"Enter [2] for [Grades Reports]"<<endl;
    cout<<"Enter [3] for [Library]"<<endl;
    cout<<"Enter [4] for [Massage]"<<endl;
    cout<<"Enter [5] for [Others]"<<endl;
    cout<<""<<endl;

    cout<<"Enter code :"<<endl;
    cin>>option;

    switch(option)
    {
    case 1:
        cout<<"Academics"<<endl;
        cout<<""<<endl;

        cout<<"Enter codes given below for further work"<<endl;
        cout<<"Enter [1] for [Courses & Result]"<<endl;
        cout<<"Enter [2] for [Registration]"<<endl;
        cout<<"Enter [3] for [Drop Application]"<<endl;
        cout<<"Enter [4] for [Offered Courses]"<<endl;
        cout<<"Enter [5] for [My Curriculum]"<<endl;
        cout<<"Enter [6] for [Financial]"<<endl;
        cout<<""<<endl;

        cout<<"Enter Code :"<<endl;
        cin>>op;

        switch(op)
        {
        case 1:
            cout<<"Courses & Result"<<endl;
            cout<<""<<endl;

            cout<<"INTRODUCTION TO PROGRAMMING [B3]\nTotal Mark :100; Passing Mark:50; Contributes:100%\nCourse Teacher(s): MD. KISHOR MOROL [1809-1931-2]"<<endl;
            cout<<"Final Result ------------------------------[B+]     "<<"Mark-----80"<<endl;
            cout<<""<<endl;
            cout<<""<<endl;

            cout<<"Enter the given code below for knowing other courses result"<<endl;
            cout<<""<<endl;
            cout<<"INTRODUCTION TO PROGRAMMING [B3]              -- 1"<<endl;
            cout<<"INTRODUCTION TO PROGRAMMING LAB [B3]          -- 2"<<endl;
            cout<<"PHYSICS 1 [B3]                                -- 3"<<endl;
            cout<<"PHYSICS 1 LAB [B3]                            -- 4"<<endl;
            cout<<"ENGLISH READING SKILLS & PUBLIC SPEAKING [B3] -- 5"<<endl;
            cout<<"DIFF CALCULUS AND COORDINATE GEOMETRY [B3]    -- 6"<<endl;
            cout<<"INTRODUCTION TO COMPUTER STUDIES [B3]         -- 7"<<endl;
            cout<<""<<endl;

            cout<<"Enter Course Code :"<<endl;
            cin>>i;
    switch(i)
    {
    case 1:
        cout<<""<<endl;
        cout<<"INTRODUCTION TO PROGRAMMING [B3]\nTotal Mark :100; Passing Mark:50; Contributes:100%\nCourse Teacher(s): MD. KISHOR MOROL [1809-1931-2]"<<endl;
        cout<<"Final Result ------------------------------[A+]     "<<"Mark-----100"<<endl;

    case 2:
        cout<<""<<endl;
        cout<<"INTRODUCTION TO PROGRAMMING LAB [B3]\nTotal Mark :100; Passing Mark:50; Contributes:100%\nCourse Teacher(s): MD. KISHOR MOROL [1809-1931-2]"<<endl;
        cout<<"Final Result ------------------------------[A+]     "<<"Mark-----100"<<endl;
        break;

    case 3:
        cout<<""<<endl;
        cout<<"PHYSICS 1 [B3]\nTotal Mark :100; Passing Mark:50; Contributes:100%\nCourse Teacher(s): DR. SHOVAN KUMAR KUNDU [2001-2050-2]"<<endl;
        cout<<"Final Result ------------------------------[A+]     "<<"Mark-----100"<<endl;
        break;

    case 4:
        cout<<""<<endl;
        cout<<"PHYSICS 1 LAB [B3]\nTotal Mark :100; Passing Mark:50; Contributes:100%\nCourse Teacher(s): DR. MD. NURUL KABIR BHUIYAN [1405-1526-2]"<<endl;
        cout<<"Final Result ------------------------------[A+]     "<<"Mark-----100"<<endl;
        break;

    case 5:
        cout<<""<<endl;
        cout<<"ENGLISH READING SKILLS & PUBLIC SPEAKING [B3]\nTotal Mark :100; Passing Mark:50; Contributes:100%\nCourse Teacher(s): BORENDRA LAL TRIPURA [1601-1688-2]"<<endl;
        cout<<"Final Result ------------------------------[A+]     "<<"Mark-----100"<<endl;
        break;

    case 6:
        cout<<""<<endl;
        cout<<"DIFF CALCULUS AND COORDINATE GEOMETRY [B3]\nTotal Mark :100; Passing Mark:50; Contributes:100%\nCourse Teacher(s): TANZIA ZERIN KHAN [1001-1010-2]"<<endl;
        cout<<"Final Result ------------------------------[A+]     "<<"Mark-----100"<<endl;
        break;

    case 7:
        cout<<""<<endl;
        cout<<"INTRODUCTION TO COMPUTER STUDIES [B3]\nTotal Mark :100; Passing Mark:50; Contributes:100%\nCourse Teacher(s): KANIZ FATEMA [1701-1754-2]"<<endl;
        cout<<"Final Result ------------------------------[A+]     "<<"Mark-----100"<<endl;
        break;
        }
            break;
    case 2:
        cout<<""<<endl;
        cout<<"Registration"<<endl;
        cout<<"We are Working on it, Sorry. Don't try again. ha ha ha!"<<endl;
        break;

    case 3:
        cout<<"Drop Application"<<endl;
        cout<<""<<endl;
        cout<<"Please check notice board for all the policies regarding add or drop. You are entitled for a refund of 0% on tuition fees"<<endl;
    cout<<"For Dropping your courses you need to enter your course code."<<endl;
    cout<<""<<endl;
    cout<<"INTRODUCTION TO PROGRAMMING [B3]              -- 1"<<endl;
    cout<<"INTRODUCTION TO PROGRAMMING LAB [B3]          -- 2"<<endl;
    cout<<"PHYSICS 1 [B3]                                -- 3"<<endl;
    cout<<"PHYSICS 1 LAB [B3]                            -- 4"<<endl;
    cout<<"ENGLISH READING SKILLS & PUBLIC SPEAKING [B3] -- 5"<<endl;
    cout<<"DIFF CALCULUS AND COORDINATE GEOMETRY [B3]    -- 6"<<endl;
    cout<<"INTRODUCTION TO COMPUTER STUDIES [B3]         -- 7"<<endl;
    cout<<""<<endl;
    cout<<"Enter Course Code :"<<endl;
    cin>>i;
    if(i == 1)
    {
        cout<<"INTRODUCTION TO PROGRAMMING [B3]\nMon 8:0 - Mon 9:30 Theory [5107]Wed 8:0 - Wed 9:30 Theory [5107] "<<endl;
        cout<<""<<endl;
        cout<<"Are you Sure?"<<endl;
        cout<<"For Confirmation you need to enter [1 for 'yes'] or [0 for 'no']"<<endl;
        cout<<""<<endl;
        cout<<"Confirmation :"<<endl;
        cin>>j;
        if(j == 1)
        {
            cout<<"Yes"<<endl;
            cout<<"Dropped 0%"<<endl;
        }
        else
        {
            cout<<"No"<<endl;
            cout<<"Make your decision first"<<endl;
        }

    }
    else if( i == 2)
    {
        cout<<"INTRODUCTION TO PROGRAMMING LAB [B3]\nMon 2:0 PM - Mon 5:0 PM Lab [D0211] "<<endl;
        cout<<""<<endl;
        cout<<"Are you Sure?"<<endl;
        cout<<"For Confirmation you need to enter [1 for 'yes'] or [0 for 'no']"<<endl;
        cout<<""<<endl;
        cout<<"Confirmation :"<<endl;
        cin>>j;
        if(j == 1)
        {
            cout<<"Yes"<<endl;
            cout<<"Dropped 0%"<<endl;
        }
        else
        {
            cout<<"No"<<endl;
            cout<<"Make your decision first"<<endl;
        }
    }
    else if(i == 3)
    {
        cout<<"PHYSICS 1 [B3]\nMon 9:30 - Mon 11:0 Theory [5107]Wed 9:30 - Wed 11:0 Theory [5107] "<<endl;
        cout<<""<<endl;
        cout<<"Are you Sure?"<<endl;
        cout<<"For Confirmation you need to enter [1 for 'yes'] or [0 for 'no']"<<endl;
        cout<<""<<endl;
        cout<<"Confirmation :"<<endl;
        cin>>j;
        if(j == 1)
        {
            cout<<"Yes"<<endl;
            cout<<"Dropped 0%"<<endl;
        }
        else
        {
            cout<<"No"<<endl;
            cout<<"Make your decision first"<<endl;
        }
    }
    else if (i == 4)
    {
        cout<<"PHYSICS 1 LAB [B3]\nTue 11:0 - Tue 2:0 PM Lab [6202] "<<endl;
        cout<<""<<endl;
        cout<<"Are you Sure?"<<endl;
        cout<<"For Confirmation you need to enter [1 for 'yes'] or [0 for 'no']"<<endl;
        cout<<""<<endl;
        cout<<"Confirmation :"<<endl;
        cin>>j;
        if(j == 1)
        {
            cout<<"Yes"<<endl;
            cout<<"Dropped 0%"<<endl;
        }
        else
        {
            cout<<"No"<<endl;
            cout<<"Make your decision first"<<endl;
        }
    }
    else if(i == 5)
    {
        cout<<"ENGLISH READING SKILLS & PUBLIC SPEAKING [B3]\nSun 2:0 PM - Sun 3:30 PM Theory [5108]Tue 2:0 PM - Tue 3:30 PM Theory [5108] "<<endl;
        cout<<""<<endl;
        cout<<"Are you Sure?"<<endl;
        cout<<"For Confirmation you need to enter [1 for 'yes'] or [0 for 'no']"<<endl;
        cout<<""<<endl;
        cout<<"Confirmation :"<<endl;
        cin>>j;
        if(j == 1)
        {
            cout<<"Yes"<<endl;
            cout<<"Dropped 0%"<<endl;
        }
        else
        {
            cout<<"No"<<endl;
            cout<<"Make your decision first"<<endl;
        }
    }
    else if (i == 6)
    {
        cout<<"DIFF CALCULUS AND COORDINATE GEOMETRY [B3]\nSun 8:0 - Sun 9:30 Theory [5106]Tue 8:0 - Tue 9:30 Theory [5106] "<<endl;
        cout<<""<<endl;
        cout<<"Are you Sure?"<<endl;
        cout<<"For Confirmation you need to enter [1 for 'yes'] or [0 for 'no']"<<endl;
        cout<<""<<endl;
        cout<<"Confirmation :"<<endl;
        cin>>j;
        if(j == 1)
        {
            cout<<"Yes"<<endl;
            cout<<"Dropped 0%"<<endl;
        }
        else
        {
            cout<<"No"<<endl;
            cout<<"Make your decision first"<<endl;
        }
    }
    else
    {
        cout<<"INTRODUCTION TO COMPUTER STUDIES [B3] \nWed 11:0 - Wed 2:0 PM Lab [D0305]"<<endl;
        cout<<""<<endl;
        cout<<"Are you Sure?"<<endl;
        cout<<"For Confirmation you need to enter [1 for 'yes'] or [0 for 'no']"<<endl;
        cout<<""<<endl;
        cout<<"Confirmation :"<<endl;
        cin>>j;
        if(j == 1)
        {
            cout<<"Yes"<<endl;
            cout<<"Dropped 0%"<<endl;
        }
        else
        {
            cout<<"No"<<endl;
            cout<<"Make your decision first"<<endl;
        }
    }
        break;

    case 4:
        cout<<"Offered Courses"<<endl;
        cout<<""<<endl;

        cout<<"ehh aiche! Go and check your portal"<<endl;
        break;

    case 5:
        cout<<"My Curriculum"<<endl;
        cout<<""<<endl;

        cout<<"We are working on it. Go and check your own portal of AIUB"<<endl;
        break;

    case 6:
        cout<<"Financial"<<endl;
        cout<<""<<endl;

        cout<<"Give me 2 Million Dollar or your girlfriend turn into mine. hihi boi. Don't take it personal. Am just joking"<<endl;
        break;
        }
        break;

    case 2:
        cout<<"Grades Reports"<<endl;
        cout<<""<<endl;
        cout<<"Enter [1] for [By Curriculum]"<<endl;
        cout<<""<<endl;
        cout<<"Enter [2] for [By Semester]"<<endl;
        cout<<""<<endl;
        cout<<"Enter :"<<endl;
        cin>>i;

        switch(i)
        {
        case 1:
            cout<<"By Curriculum"<<endl;
            cout<<""<<endl;

            cout<<"Who Do i know your Curriculum Activity? kesa laga mere majak."<<endl;
            break;

        case 2:
            cout<<"By Semester"<<endl;
            cout<<""<<endl;
            cout<<"First semester CGPA ---4.00"<<endl;
        }
        break;

    case 3:
        cout<<"Library"<<endl;
        cout<<""<<endl;
        cout<<"Go to the [C] building and check out the books."<<endl;
        cout<<"If you Borrow any book from AIUB Library then you need to return it."<<endl;
        cout<<""<<endl;
        cout<<"If you want to buy it. Then pay in online"<<endl;
        cout<<"For buying book enter [1]"<<endl;
        cout<<""<<endl;

        cout<<"Want to buy?"<<endl;
        cin>>b;
        if (b == 1)
        {
            cout<<"Successfully Done. Now, this is yours. Thank you!"<<endl;
        }
        else
        {
            cout<<"Sorry."<<endl;
        }
        break;

    case 4:
        cout<<"Massage"<<endl;
        cout<<""<<endl;
        cout<<"Hi am Aftab, Rakin Sad Aftab. Am studying CS at American International University-Bangladesh. This is like a project.\nI didn't done it well because still am not understand the [for loop].\nAm trying to learn it."<<endl;
        cout<<"In this program you will face just one problem. That is you need to login as long as you want to know informations.\nOtherwise you will not face any problem. I am trying more and more to learn for loop properly.  "<<endl;
        cout<<"And am using some funny words which is not related with my University Activity. Don't take it seriously."<<endl;
        cout<<"Thank You for understanding."<<endl;
        break;

    case 5:
        cout<<"Others"<<endl;
        cout<<""<<endl;
        cout<<"Enter [1] for [Application]"<<endl;
        cout<<"Enter [2] for [Parking Application]"<<endl;
        cout<<"Enter [3] for [Download Forms]"<<endl;

        cout<<"Enter :"<<endl;
        cin>>i;

        switch(i)
        {

       case 1:
        cout<<"Application"<<endl;
        cout<<""<<endl;
        cout<<"Write a application and mailed it on AIUB Official mail address. [aiub@edu]"<<endl;
        break;

       case 2:
        cout<<"Parking Application"<<endl;
        cout<<""<<endl;
        cout<<"If you want to park [BIKE, CAR or YOU] then you need to confirm the below question"<<endl;
        cout<<"Are you sure to park you vehicle on AIUB parking zone? If your answer is yes then confirm is by entering [1]"<<endl;
        cout<<"Confirm?"<<endl;
        cin>>j;

                if( j == 1)
                {
                    cout<<"confirmation Complete."<<endl;
                    cout<<"Wait for our Verification mail which will me sent on your [student mail address]"<<endl;
                    cout<<"This mail contain a [confirmation link]. Go to the link and confirm it. Thank You." <<endl;
                }
                else
                {
                    cout<<"Invalid"<<endl;
                }

        break;

       case 3:
        cout<<"Download forms"<<endl;
        cout<<""<<endl;
        cout<<"Go to your real aiub portal and get it. Don't disturb me, okay? now leave."<<endl;
        cout<<""<<endl;
        cout<<"Are you want to log out? if you enter [o]"<<endl;
        cin>>k;
        cout<<""<<endl;

        if( k = 0 )
        {
            cout<<"Logging Out. Thank you Student."<<endl;
        }
        else
        {
            cout<<"Automatically Logging out."<<endl;
        }
        break;
        }

        }

    }

