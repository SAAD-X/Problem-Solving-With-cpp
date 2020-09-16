#include<iostream>

#include<string>

using namespace std;

int main()
{
    string user_name;
    string password;
    int i;
    int option;
    int ch;
    int js;
    int mi;
    int pass;
    int can;
    int sure;
    int exit;
    cout<<"Username: "<<endl;
    cin>> user_name;
    cout<<"Password: "<<endl;
    cin>>password;
    cout<<"Welcome Soldier!                                                           username:"<<user_name<<endl;
    cout<<"________________________________________________________________________________________________"<<endl;
    cout<<"Missions        Batch:7         Completed Mission:20         Designation:CAPTAIN         Port:22"<<endl;
    cout<<"________________________________________________________________________________________________"<<endl;
    cout<<"--------------------------------Upcoming Missions-----------------------------------------------"<<endl;
    cout<<"                                                                                                "<<endl;
    cout<<"Delta-1         Delta-2         Delta-3         Delta-4         Lax-3         Corp-4         T-F"<<endl;
    cout<<""<<endl;
    cout<<"For joining enter [1]"<<endl;
    cout<<"For [no] enter [0]"<<endl;
    cout<<""<<endl;
    cout<<"Want to go to missions?"<<endl;
    cin>>ch;
    cout<<""<<endl;
    if(ch == 1)
    {
        cout<<"Here is the mission codes you want to join, Enter codes"<<endl;
        cout<<""<<endl;
        cout<<"Mission Name      Codes"<<endl;
        cout<<""<<endl;
        cout<<"Delta-1 :---       999"<<endl;
        cout<<"Delta-2 :---       896"<<endl;
        cout<<"Delta-3 :---       321"<<endl;
        cout<<"Delta-4 :---       444"<<endl;
        cout<<"Lax-3   :---       456"<<endl;
        cout<<"Corp-4  :---       753"<<endl;
        cout<<"T-F     :---       159"<<endl;
        cout<<""<<endl;
        cout<<"Bravo!\nWhich mission you want to join soldier?"<<endl;
        cin>>js;
        cout<<""<<endl;
        if(js == 999)
        {
            cout<<"Well Done Soldier.Wish You very very best of luck.\nFor mission info enter 222"<<endl;
            cin>>mi;
            cout<<""<<endl;
            if(mi == 222)
            {
                cout<<"Mission will start in [10th of July 2020].\nYour platoon no-[10]\n Position- CAPTAIN 1ST CLASS\n Soldiers under you:[20]\nArms Will available on Room no: [500]."<<endl;
                cout<<"You will need a password for entering the room, pass-89"<<endl;
                cout<<""<<endl;
                cout<<"Enter room password for arms: "<<endl;
                cin>>pass;
                cout<<""<<endl;
                if(pass == 89)
                {
                    cout<<"Take your arms and wait for the plane"<<endl;
                    cout<<"If You are in confusion please exit or cancel the mission."<<endl;
                    cout<<"For canceling This mission enter [4]"<<endl;
                    cout<<"Cancel?"<<endl;
                    cin>>can;
                    if(can == 4)
                    {
                        cout<<"Enter [1] if you are you sure. If you are not Enter [0]"<<endl;
                        cout<<"Are you sure"<<endl;
                        cin>>sure;
                        if(sure == 1)
                        {
                            cout<<"You are now out of mission"<<endl;
                            cout<<"Enter [1] for [exit]"<<endl;
                            cin>>exit;
                            if(exit == 1)
                            {
                                cout<<""<<endl;
                            }
                            else
                            {
                                cout<<"Automatically Logging out.\nThank you Soldier."<<endl;
                            }
                        }
                        else
                        {
                            cout<<"Mission Status:-----  ACTIVE"<<endl;
                        }

                    }
                    else
                    {
                        cout<<"Enter the correct code"<<endl;
                    }
                }
                else
                {
                    cout<<"Access Denied"<<endl;
                }
            }
            else
            {
                cout<<"Assess Denied"<<endl;
            }
        }
        else if(js == 896)
        {
            cout<<"Well Done Soldier.Wish You very very best of luck.\nFor mission info enter 221"<<endl;
            cin>>mi;
            cout<<""<<endl;
            if(mi == 221)
            {
                cout<<"Mission will start in [11th of July 2020].\nYour platoon no-[10]\n Position- CAPTAIN 1ST CLASS\n Soldiers under you:[20]\nArms Will available on Room no: [501]."<<endl;
                cout<<"You will need a password for entering the room, pass-90"<<endl;
                cout<<""<<endl;
                cout<<"Enter room password for arms: "<<endl;
                cin>>pass;
                cout<<""<<endl;
                if(pass == 90)
                {
                    cout<<"Take your arms and wait for the plane"<<endl;
                     cout<<"If You are in confusion please exit or cancel the mission."<<endl;
                    cout<<"For canceling This mission enter [4]"<<endl;
                    cout<<"Cancel?"<<endl;
                    cin>>can;
                    if(can == 4)
                    {
                        cout<<"Enter [1] if you are you sure. If you are not Enter [0]"<<endl;
                        cout<<"Are you sure"<<endl;
                        cin>>sure;
                        if(sure == 1)
                        {
                            cout<<"You are now out of mission"<<endl;
                            cout<<"Enter [1] for [exit]"<<endl;
                            cin>>exit;
                            if(exit == 1)
                            {
                                cout<<""<<endl;
                            }
                            else
                            {
                                cout<<"Automatically Logging out.\nThank you Soldier."<<endl;
                            }
                        }
                        else
                        {
                            cout<<"Mission Status:-----  ACTIVE"<<endl;
                        }

                    }
                    else
                    {
                        cout<<"Enter the correct code"<<endl;
                    }
                }
                else
                {
                    cout<<"Access Denied"<<endl;
                }
            }
            else
            {
                cout<<"Assess Denied"<<endl;
            }
        }
        else if(js == 321)
        {
            cout<<"Well Done Soldier.Wish You very very best of luck.\nFor mission info enter 220"<<endl;
            cin>>mi;
            cout<<""<<endl;
            if(mi == 220)
            {
                cout<<"Mission will start in [11th of July 2020].\nYour platoon no-[10]\n Position- CAPTAIN 1ST CLASS\n Soldiers under you:[20]\nArms Will available on Room no: [502]."<<endl;
                cout<<"You will need a password for entering the room, pass-91"<<endl;
                cout<<""<<endl;
                cout<<"Enter room password for arms: "<<endl;
                cin>>pass;
                cout<<""<<endl;
                if(pass == 91)
                {
                    cout<<"Take your arms and wait for the plane"<<endl;
                    cout<<"If You are in confusion please exit or cancel the mission."<<endl;
                    cout<<"For canceling This mission enter [4]"<<endl;
                    cout<<"Cancel?"<<endl;
                    cin>>can;
                    if(can == 4)
                    {
                        cout<<"Enter [1] if you are you sure. If you are not Enter [0]"<<endl;
                        cout<<"Are you sure"<<endl;
                        cin>>sure;
                        if(sure == 1)
                        {
                            cout<<"You are now out of mission"<<endl;
                            cout<<"Enter [1] for [exit]"<<endl;
                            cin>>exit;
                            if(exit == 1)
                            {
                                cout<<""<<endl;
                            }
                            else
                            {
                                cout<<"Automatically Logging out.\nThank you Soldier."<<endl;
                            }
                        }
                        else
                        {
                            cout<<"Mission Status:-----  ACTIVE"<<endl;
                        }

                    }
                    else
                    {
                        cout<<"Enter the correct code"<<endl;
                    }
                }
                else
                {
                    cout<<"Access Denied"<<endl;
                }
            }
            else
            {
                cout<<"Assess Denied"<<endl;
            }
        }
        else if(js == 444)
        {
            cout<<"Well Done Soldier.Wish You very very best of luck.\nFor mission info enter 219"<<endl;
            cin>>mi;
            cout<<""<<endl;
            if(mi == 219)
            {
                cout<<"Mission will start in [11th of July 2020].\nYour platoon no-[10]\n Position- CAPTAIN 1ST CLASS\n Soldiers under you:[20]\nArms Will available on Room no: [502]."<<endl;
                cout<<"You will need a password for entering the room, pass-92"<<endl;
                cout<<""<<endl;
                cout<<"Enter room password for arms: "<<endl;
                cin>>pass;
                cout<<""<<endl;
                if(pass == 92)
                {
                    cout<<"Take your arms and wait for the plane"<<endl;
                    cout<<"If You are in confusion please exit or cancel the mission."<<endl;
                    cout<<"For canceling This mission enter [4]"<<endl;
                    cout<<"Cancel?"<<endl;
                    cin>>can;
                    if(can == 4)
                    {
                        cout<<"Enter [1] if you are you sure. If you are not Enter [0]"<<endl;
                        cout<<"Are you sure"<<endl;
                        cin>>sure;
                        if(sure == 1)
                        {
                            cout<<"You are now out of mission"<<endl;
                            cout<<"Enter [1] for [exit]"<<endl;
                            cin>>exit;
                            if(exit == 1)
                            {
                                cout<<""<<endl;
                            }
                            else
                            {
                                cout<<"Automatically Logging out.\nThank you Soldier."<<endl;
                            }
                        }
                        else
                        {
                            cout<<"Mission Status:-----  ACTIVE"<<endl;
                        }

                    }
                    else
                    {
                        cout<<"Enter the correct code"<<endl;
                    }
                }
                else
                {
                    cout<<"Access Denied"<<endl;
                }
            }
            else
            {
                cout<<"Assess Denied"<<endl;
            }
        }
        else if(js == 456)
        {
            cout<<"Well Done Soldier.Wish You very very best of luck.\nFor mission info enter 218"<<endl;
            cin>>mi;
            cout<<""<<endl;
            if(mi == 218)
            {
                cout<<"Mission will start in [11th of July 2020].\nYour platoon no-[10]\n Position- CAPTAIN 1ST CLASS\n Soldiers under you:[20]\nArms Will available on Room no: [503]."<<endl;
                cout<<"You will need a password for entering the room, pass-93"<<endl;
                cout<<""<<endl;
                cout<<"Enter room password for arms: "<<endl;
                cin>>pass;
                cout<<""<<endl;
                if(pass == 93)
                {
                    cout<<"Take your arms and wait for the plane"<<endl;
                    cout<<"If You are in confusion please exit or cancel the mission."<<endl;
                    cout<<"For canceling This mission enter [4]"<<endl;
                    cout<<"Cancel?"<<endl;
                    cin>>can;
                    if(can == 4)
                    {
                        cout<<"Enter [1] if you are you sure. If you are not Enter [0]"<<endl;
                        cout<<"Are you sure"<<endl;
                        cin>>sure;
                        if(sure == 1)
                        {
                            cout<<"You are now out of mission"<<endl;
                            cout<<"Enter [1] for [exit]"<<endl;
                            cin>>exit;
                            if(exit == 1)
                            {
                                cout<<""<<endl;
                            }
                            else
                            {
                                cout<<"Automatically Logging out.\nThank you Soldier."<<endl;
                            }
                        }
                        else
                        {
                            cout<<"Mission Status:-----  ACTIVE"<<endl;
                        }

                    }
                    else
                    {
                        cout<<"Enter the correct code"<<endl;
                    }
                }
                else
                {
                    cout<<"Access Denied"<<endl;
                }
            }
            else
            {
                cout<<"Assess Denied"<<endl;
            }
        }
        else if(js == 753)
        {
            cout<<"Well Done Soldier.Wish You very very best of luck.\nFor mission info enter 217"<<endl;
            cin>>mi;
            cout<<""<<endl;
            if(mi == 217)
            {
                cout<<"Mission will start in [11th of July 2020].\nYour platoon no-[10]\n Position- CAPTAIN 1ST CLASS\n Soldiers under you:[20]\nArms Will available on Room no: [504]."<<endl;
                cout<<"You will need a password for entering the room, pass-94"<<endl;
                cout<<""<<endl;
                cout<<"Enter room password for arms: "<<endl;
                cin>>pass;
                cout<<""<<endl;
                if(pass == 94)
                {
                    cout<<"Take your arms and wait for the plane"<<endl;
                    cout<<"If You are in confusion please exit or cancel the mission."<<endl;
                    cout<<"For canceling This mission enter [4]"<<endl;
                    cout<<"Cancel?"<<endl;
                    cin>>can;
                    if(can == 4)
                    {
                        cout<<"Enter [1] if you are you sure. If you are not Enter [0]"<<endl;
                        cout<<"Are you sure"<<endl;
                        cin>>sure;
                        if(sure == 1)
                        {
                            cout<<"You are now out of mission"<<endl;
                            cout<<"Enter [1] for [exit]"<<endl;
                            cin>>exit;
                            if(exit == 1)
                            {
                                cout<<""<<endl;
                            }
                            else
                            {
                                cout<<"Automatically Logging out.\nThank you Soldier."<<endl;
                            }
                        }
                        else
                        {
                            cout<<"Mission Status:-----  ACTIVE"<<endl;
                        }

                    }
                    else
                    {
                        cout<<"Enter the correct code"<<endl;
                    }
                }
                else
                {
                    cout<<"Access Denied"<<endl;
                }
            }
            else
            {
                cout<<"Assess Denied"<<endl;
            }
        }

        else if(js == 159)
        {
            cout<<"Well Done Soldier.Wish You very very best of luck.\nFor mission info enter 216"<<endl;
            cin>>mi;
            cout<<""<<endl;
            if(mi == 216)
            {
                cout<<"Mission will start in [11th of July 2020].\nYour platoon no-[10]\nPosition- CAPTAIN 1ST CLASS\nSoldiers under you:[20]\nArms Will available on Room no: [505]."<<endl;
                cout<<"You will need a password for entering the room, pass-95"<<endl;
                cout<<""<<endl;
                cout<<"Enter room password for arms: "<<endl;
                cin>>pass;
                cout<<""<<endl;
                if(pass == 95)
                {
                    cout<<"Take your arms and wait for the plane"<<endl;
                    cout<<"If You are in confusion please exit or cancel the mission."<<endl;
                    cout<<"For canceling This mission enter [4]"<<endl;
                    cout<<"Cancel?"<<endl;
                    cin>>can;
                    if(can == 4)
                    {
                        cout<<"Enter [1] if you are you sure. If you are not Enter [0]"<<endl;
                        cout<<"Are you sure"<<endl;
                        cin>>sure;
                        if(sure == 1)
                        {
                            cout<<"You are now out of mission"<<endl;
                            cout<<"Enter [1] for [exit]"<<endl;
                            cin>>exit;
                            if(exit == 1)
                            {
                                cout<<""<<endl;
                            }
                            else
                            {
                                cout<<"Automatically Logging out.\nThank you Soldier."<<endl;
                            }
                        }
                        else
                        {
                            cout<<"Mission Status:-----  ACTIVE"<<endl;
                        }

                    }
                    else
                    {
                        cout<<"Enter the correct code"<<endl;
                    }

                }
                else
                {
                    cout<<"Access Denied"<<endl;
                }
            }
            else
            {
                cout<<"Assess Denied"<<endl;
            }
        }
    }
    else if(ch == 0)
    {
        cout<<"Take rest soldier"<<endl;
    }
    else
    {
        cout<<"Prepare for your next command"<<endl;
    }
}
