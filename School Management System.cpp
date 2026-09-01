#include <iostream>
#include <string>

using namespace std;

class Admin
{
public:
    int choice, ch, ch1, ch2, ch3;
    string name, username, password, uname, pass,name1,name2,id1,id2,salary1,salary2,subject1,subject2;

    void admin()
    {
        do
        {
            cout << "===== Admin Portal =====" << endl;
            cout << "1. REGISTRATION" << endl;
            cout << "2. Login" << endl;
            cout << "0. BACK MENU" << endl;
            cout << "Enter Your Choice: ";
            cin >> choice;

            switch (choice)
            {
            case 1:
                cout << "===== REGISTRATION =====" << endl;
                cout << "ENTER Details:" << endl;

                cout << "Enter Name: ";
                cin >> name;

                cout << "Enter UserName: ";
                cin >> username;

                cout << "Enter Password: ";
                cin >> password;

                cout << "ACCOUNT CREATED SUCCESSFULLY!" << endl;
                break;

            case 2:
                do
                {
                    cout << "===== LOGIN =====" << endl;
                    cout << "Enter UserName: ";
                    cin >> uname;

                    cout << "Enter Password: ";
                    cin >> pass;

                    if (uname == username && pass == password)
                    {
                        do
                        {
                            cout << "*** Admin Portal ***" << endl;
                            cout << "Welcome " << uname << endl;
                            cout << "1. Teacher Account" << endl;
                            cout << "2. Student Account" << endl;
                            cout << "3. Result" << endl;
                            cout << "0. LOGOUT" << endl;
                            cout << "Enter Your Choice: ";
                            cin >> ch;

                            switch (ch)
                            {

                            case 1:
                                cout << "##### Teacher Account #####" << endl;

                                do
                                {
                                    cout << "1. ADD" << endl;
                                    cout << "2. UPDATE" << endl;
                                    cout << "3. DELETE" << endl;
                                    cout << "4. SHOW" << endl;
                                    cout << "5. SALARY" << endl;
                                    cout << "6. SHOW All Teacher" << endl;
                                    cout << "0. BACK MENU" << endl;
                                    cout << "Enter Your Choice: ";
                                    cin >> ch1;

                                    switch (ch1)
                                    {
                                    case 1:
                                        cout<<"***** Add *****"<<endl;
                                        cout<<"Enter Employee Id"<<endl;
                                        cin>>id1;
                                        cout<<"Enter Name Of Teacher "<<endl;
                                        cin>>name1;
                                        cout<<"Enter Subject"<<endl;
                                        cin>>subject1;
                                        cout<<"Enter Salary "<<endl;
                                        cin>>salary1;

                                        break;

                                    case 2:
                                        cout<<"***** Update *****"<<endl;
                                        cout<<"Enter Updated Name"<<endl;
                                        cin>>name2;
                                        name1=name2;
                                        cout<<"Enter New Subject"<<endl;
                                        cin>>subject2;
                                        subject1=subject2;
                                        cout<<"Enter New Salary "<<endl;
                                        cin>>salary2;
                                        salary1=salary2;
                                        cout<<"Updates Done Successfully"<<endl;
                                        break;

                                    case 3:
                                        cout<<"***** Delete *****"<<endl;
                                        cout<<"Enter id To Delete"<<endl;
                                        cin>>id2;
                                    if(id2==id1)
                                        {
                                            id1="no Id";
                                            cout<<"Id Deleted Successfully"<<endl;
                                        }
                                        else{
                                            cout<<"id Not Found"<<endl;
                                        }

                                        break;

                                    case 4:
                                        cout<<"***** Show *****"<<endl;
                                        cout<<"Teacher id = "<<id1<<endl;
                                        cout<<"Teacher name = "<<name1<<endl;
                                        cout<<"Teacher salary = "<<salary1<<endl;
                                        break;

                                    case 5:
                                        cout<<"***** EMPLOYEE DETAILS SALARY *****"<<endl;
                                        cout<<"EMP ID: "<<id1<<endl;
                                        cout<<"NAME: "<<name1<<endl;
                                        cout<<"SUBJECT: "<<subject1<<endl;
                                        cout<<"CURRENT SALARY: "<<salary1<<endl;
                                        break;

                                    case 6:
                                        cout<<"***** All Teacher Data *****"<<endl;
                                        cout<<"EMP ID    NAME       SUBJECT       SALARY"<<endl;
                                        break;

                                    case 0:
                                        cout << "Back To Menu" << endl;
                                        break;

                                    default:
                                        cout << "Wrong Choice" << endl;
                                        break;
                                    }

                                } while (ch1 != 0);

                                break;

                            case 2:
                                cout << "##### Student Account #####" << endl;

                                do
                                {
                                    cout << "1. ADD" << endl;
                                    cout << "2. UPDATE" << endl;
                                    cout << "3. DELETE" << endl;
                                    cout << "4. SHOW" << endl;
                                    cout << "0. BACK MENU" << endl;
                                    cout << "Enter Your Choice: ";
                                    cin >> ch2;

                                    switch (ch2)
                                    {
                                    case 1:
                                        break;

                                    case 2:
                                        break;

                                    case 3:
                                        break;

                                    case 4:
                                        break;

                                    case 0:
                                        cout << "Back To Menu" << endl;
                                        break;

                                    default:
                                        cout << "Invalid Choice" << endl;
                                        break;
                                    }

                                } while (ch2 != 0);

                                break;

                            case 3:
                                cout << "##### Result #####" << endl;

                                do
                                {
                                    cout << "1. SEARCH" << endl;
                                    cout << "2. SHOW" << endl;
                                    cout << "3. EDIT" << endl;
                                    cout << "0. BACK MENU" << endl;
                                    cout << "Enter Your Choice: ";
                                    cin >> ch3;

                                    switch (ch3)
                                    {
                                    case 1:
                                        break;

                                    case 2:
                                        break;

                                    case 3:
                                        break;

                                    case 0:
                                        cout << "Back To Menu" << endl;
                                        break;

                                    default:
                                        cout << "Invalid Choice" << endl;
                                        break;
                                    }

                                } while (ch3 != 0);

                                break;

                            case 0:
                                cout << "Account LogOut!!!" << endl;
                                break;

                            default:
                                cout << "Invalid Choice" << endl;
                                break;
                            }

                        } while (ch != 0);
                    }
                    else
                    {
                        cout << "Wrong UserName Or Password, Try Again!!!" << endl;
                    }

                } while (choice != 0);

                break;

            case 0:
                cout << "Exit" << endl;
                break;

            default:
                cout << "Invalid Choice" << endl;
                break;
            }

        } while (choice != 0);
    }
};


// Teacher class
class Teacher
{
public:
    int ch4;
    string username, password, uname, pass;

    void teacher()
    {
        cout << "Teacher Portal" << endl;

        do
        {
            cout << "1. LOGIN" << endl;
            cout << "2. REGISTRATION" << endl;
            cout << "0. BACK MENU" << endl;
            cout << "Enter Your Choice: ";
            cin >> ch4;

            switch (ch4)
            {
            case 1:
                cout << "***** Login *****" << endl;
                cout << "Enter UserName: ";
                cin >> uname;

                cout << "Enter Password: ";
                cin >> pass;

                if (uname == username && pass == password)
                {
                    cout << "----- Teacher Portal -----" << endl;
                    cout << "1. Select Subject" << endl;
                    cout << "2. Add Marks" << endl;
                    cout << "3. Result" << endl;
                    cout << "0. LOGOUT" << endl;
                }
                else
                {
                    cout << "Wrong UserName Or Password" << endl;
                }

                break;

            case 2:
                cout << "***** Registration *****" << endl;
                cout << "Account Created Successfully" << endl;
                break;

            case 0:
                cout << "Back To Menu" << endl;
                break;

            default:
                cout << "Invalid Choice" << endl;
                break;
            }

        } while (ch4 != 0);
    }
};


int main()
{
    Admin a;
    Teacher t;

    int choice;

    cout << "WELCOME BACK TO SCHOOL" << endl;

    do
    {
        cout << "\nMENU:" << endl;
        cout << "1. ADMIN PORTAL" << endl;
        cout << "2. TEACHER PORTAL" << endl;
        cout << "3. STUDENT PORTAL" << endl;
        cout << "4. RESULT PORTAL" << endl;
        cout << "0. Exit" << endl;

        cout << "\nEnter Your Choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            a.admin();
            break;

        case 2:
            t.teacher();
            break;

        case 3:
            cout << "Student Portal" << endl;
            break;

        case 4:
            cout << "Result Portal" << endl;
            break;

        case 0:
            cout << "Thank You!" << endl;
            break;

        default:
            cout << "Invalid Choice" << endl;
            break;
        }

    } while (choice != 0);

    return 0;
}
