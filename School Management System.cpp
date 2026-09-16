#include <iostream>
#include <string>

using namespace std;

class Admin
{
public:

   int choice, ch, ch1, ch2, ch3;

    string name, username, password;
    string uname, pass;
    string id2;

    // Teacher
    int teacherCount = 0;

    string teacherId[10];
    string teacherName[10];
    string teacherSubject[10];
    string teacherSalary[10];

    // Student
    int studentCount = 0;
    string studentId2;
    string studentId[10];
    string studentName[10];
    string studentSurname[10];
    string studentFatherName[10];
    string studentClass[10];
    string studentPassword[10];

    // Result
    int internal[10][5];
    int onPaper[10][5];

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

                cout << "Enter Name: ";
                cin >> name;

                cout << "Enter UserName: ";
                cin >> username;

                cout << "Enter Password: ";
                cin >> password;

                cout << "ACCOUNT CREATED SUCCESSFULLY!" << endl;

                break;


            case 2:

                cout << "===== LOGIN =====" << endl;

                cout << "Enter UserName: ";
                cin >> uname;

                cout << "Enter Password: ";
                cin >> pass;

                if (uname == username && pass == password)
                {
                    cout << "Login Successful" << endl;

                    do
                    {
                        cout << endl;
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
                                cout << endl;
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

                                    cout << "***** Add *****" << endl;

                                    if (teacherCount < 10)
                                    {
                                        cout << "Enter Employee Id: ";
                                        cin >> teacherId[teacherCount];

                                        cout << "Enter Name Of Teacher: ";
                                        cin >> teacherName[teacherCount];

                                        cout << "Enter Subject: ";
                                        cin >> teacherSubject[teacherCount];

                                        cout << "Enter Salary: ";
                                        cin >> teacherSalary[teacherCount];

                                        teacherCount++;

                                        cout << "Teacher Added Successfully" << endl;
                                    }
                                    else
                                    {
                                        cout << "Teacher Storage is Full" << endl;
                                    }

                                    break;


                                case 2:

                                    cout << "***** Update *****" << endl;

                                    cout << "Enter Employee Id: ";
                                    cin >> id2;

                                    {
                                        int i;

                                        for (i = 0; i < teacherCount; i++)
                                        {
                                            if (teacherId[i] == id2)
                                            {
                                                cout << "Enter Updated Name: ";
                                                cin >> teacherName[i];

                                                cout << "Enter New Subject: ";
                                                cin >> teacherSubject[i];

                                                cout << "Enter New Salary: ";
                                                cin >> teacherSalary[i];

                                                cout << "Updates Done Successfully" << endl;

                                                break;
                                            }
                                        }

                                        if (i == teacherCount)
                                        {
                                            cout << "Teacher Not Found" << endl;
                                        }
                                    }

                                    break;


                                case 3:

                                    cout << "***** Delete *****" << endl;

                                    cout << "Enter Id To Delete: ";
                                    cin >> id2;

                                    {
                                        int i;

                                        for (i = 0; i < teacherCount; i++)
                                        {
                                            if (teacherId[i] == id2)
                                            {
                                                for (int j = i; j < teacherCount - 1; j++)
                                                {
                                                    teacherId[j] = teacherId[j + 1];
                                                    teacherName[j] = teacherName[j + 1];
                                                    teacherSubject[j] = teacherSubject[j + 1];
                                                    teacherSalary[j] = teacherSalary[j + 1];
                                                }

                                                teacherCount--;

                                                cout << "Teacher Deleted Successfully" << endl;

                                                break;
                                            }
                                        }

                                        if (i == teacherCount)
                                        {
                                            cout << "Id Not Found" << endl;
                                        }
                                    }

                                    break;


                                case 4:

                                    cout << "***** Show *****" << endl;

                                    cout << "Enter Employee Id: ";
                                    cin >> id2;

                                    {
                                        int i;

                                        for (i = 0; i < teacherCount; i++)
                                        {
                                            if (teacherId[i] == id2)
                                            {
                                                cout << endl;
                                                cout << "Teacher Id = "
                                                     << teacherId[i] << endl;

                                                cout << "Teacher Name = "
                                                     << teacherName[i] << endl;

                                                cout << "Teacher Subject = "
                                                     << teacherSubject[i] << endl;

                                                cout << "Teacher Salary = "
                                                     << teacherSalary[i] << endl;

                                                break;
                                            }
                                        }

                                        if (i == teacherCount)
                                        {
                                            cout << "Teacher Not Found" << endl;
                                        }
                                    }

                                    break;


                                case 5:

                                    cout << "***** EMPLOYEE DETAILS SALARY *****" << endl;

                                    cout << "Enter Employee Id: ";
                                    cin >> id2;

                                    {
                                        int i;

                                        for (i = 0; i < teacherCount; i++)
                                        {
                                            if (teacherId[i] == id2)
                                            {
                                                cout << endl;
                                                cout << "EMP ID: "
                                                     << teacherId[i] << endl;

                                                cout << "NAME: "
                                                     << teacherName[i] << endl;

                                                cout << "SUBJECT: "
                                                     << teacherSubject[i] << endl;

                                                cout << "CURRENT SALARY: "
                                                     << teacherSalary[i] << endl;

                                                break;
                                            }
                                        }

                                        if (i == teacherCount)
                                        {
                                            cout << "Teacher Not Found" << endl;
                                        }
                                    }

                                    break;


                                case 6:

                                    cout << "***** All Teacher Data *****" << endl;

                                    if (teacherCount == 0)
                                    {
                                        cout << "No Teacher Data Available" << endl;
                                    }
                                    else
                                    {
                                        cout << "EMP ID\tNAME\tSUBJECT\tSALARY" << endl;

                                        for (int i = 0; i < teacherCount; i++)
                                        {
                                            cout << teacherId[i] << "\t"<< teacherName[i] << "\t"<< teacherSubject[i] << "\t"<< teacherSalary[i] << endl;
                                        }
                                    }

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
                                    cout << "Student ADD" << endl;
                                    if (studentCount < 10)
                                    {
                                        cout << "Enter Student Id: ";
                                        cin >> studentId[studentCount];

                                        cout << "Enter Name Of Student: ";
                                        cin >> studentName[studentCount];

                                        cout<<"Enter Surname: ";
                                        cin >> studentSurname[studentCount];

                                        cout<<"Enter Father Name: ";
                                        cin >> studentFatherName[studentCount];

                                        cout << "Enter Class: ";
                                        cin >> studentClass[studentCount];

                                        cout << "Enter Password: ";
                                        cin >> studentPassword[studentCount];

                                        studentCount++;

                                        cout << "Student Added Successfully" << endl;
                                    }
                                    else
                                    {
                                        cout << "Student Storage is Full" << endl;
                                    }
                                    break;

                                case 2:
                                    cout << "Student UPDATE" << endl;
                                    cout << "Enter Student Id: ";
                                    cin >> studentId2;

                                    {
                                        int i;

                                        for (i = 0; i < studentCount; i++)
                                        {
                                            if (studentId[i] == studentId2)
                                            {
                                                cout << "Enter Updated Name: ";
                                                cin >> studentName[i];

                                                cout << "Enter Updated Surname: ";
                                                cin >> studentSurname[i];

                                                cout << "Enter Updated Father Name: ";
                                                cin >> studentFatherName[i];

                                                cout << "Enter Updated Class: ";
                                                cin >> studentClass[i];

                                                cout << "Enter Updated Password: ";
                                                cin >> studentPassword[i];

                                                cout << "Updates Done Successfully" << endl;

                                                break;
                                            }
                                        }

                                        if (i == studentCount)
                                        {
                                            cout << "Student Not Found" << endl;
                                        }
                                    break;

                                case 3:
                                    cout << "Student DELETE" << endl;
                                    cout<<"Enter Student Id To Delete: ";
                                    cin >> studentId2;

                                    {
                                        int i;

                                        for (i = 0; i < studentCount; i++)
                                        {
                                            if (studentId[i] == studentId2)
                                            {
                                                for (int j = i; j < studentCount - 1; j++)
                                                {
                                                    studentId[j] = studentId[j + 1];
                                                    studentName[j] = studentName[j + 1];
                                                    studentSurname[j] = studentSurname[j + 1];
                                                    studentFatherName[j] = studentFatherName[j + 1];
                                                    studentClass[j] = studentClass[j + 1];
                                                    studentPassword[j] = studentPassword[j + 1];
                                                }

                                                studentCount--;

                                                cout << "Student Deleted Successfully" << endl;

                                                break;
                                            }
                                        }

                                        if (i == studentCount)
                                        {
                                            cout << "Student Id Not Found" << endl;
                                        }
                                    }
                                    break;

                                case 4:
                                    cout << "Student SHOW" << endl;
                                    cout << "Enter Student Id: ";
                                    cin >> studentId2;
                                    
                                    {
                                        int i;

                                        for (i = 0; i < studentCount; i++)
                                        {
                                            if (studentId[i] == studentId2)
                                            {
                                                cout << endl;
                                                cout << "Student Id = "
                                                     << studentId[i] << endl;

                                                cout << "Student Name = "
                                                     << studentName[i] << endl;

                                                cout << "Student Surname = "
                                                     << studentSurname[i] << endl;

                                                cout << "Student Father Name = "
                                                     << studentFatherName[i] << endl;

                                                cout << "Student Class = "
                                                     << studentClass[i] << endl;

                                                cout << "Student Password = "
                                                     << studentPassword[i] << endl;

                                                break;
                                            }
                                        }

                                        if (i == studentCount)
                                        {
                                            cout << "Student Not Found" << endl;
                                        }
                                    }
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
                                    cout << "Result SEARCH" << endl;
                                    cout << "Enter Student Id: ";
                                    cin >> studentId2;
                                    cout << "************************ RESULT ************************" << endl;
                                    cout << "COLLEGE: Asterisc higher university, Nagpur" << endl;
                                    cout<<"Name: "<<studentName[studentCount]<<endl;
                                    cout<<"Father Name: "<<studentFatherName[studentCount]<<endl;
                                    cout<<"Surname: "<<studentSurname[studentCount]<<endl;
                                    cout<<"Class: "<<studentClass[studentCount]<<endl;
                                    cout<<"Subject\tInternal\tOn paper\tTotal"<<endl;
                                    for(int i=0;i<5;i++)
                                    {
                                       
                                    }
                                    break;

                                case 2:
                                    cout << "Result SHOW" << endl;
                                    break;

                                case 3:
                                    cout << "Result EDIT" << endl;
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
                    cout << "Wrong UserName Or Password" << endl;
                }

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


class Teacher
{
public:

    int ch4;

    string username, password;
    string uname, pass;

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
                    cout << "Login Successful" << endl;
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

                cout << "Enter UserName: ";
                cin >> username;

                cout << "Enter Password: ";
                cin >> password;

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
    int choice;

    Admin a;
    Teacher t;

    cout << "====================================" << endl;
    cout << "       WELCOME BACK TO SCHOOL       " << endl;
    cout << "====================================" << endl;

    do
    {
        cout << endl;
        cout << "MENU:" << endl;
        cout << "1. ADMIN PORTAL" << endl;
        cout << "2. TEACHER PORTAL" << endl;
        cout << "3. STUDENT PORTAL" << endl;
        cout << "4. RESULT PORTAL" << endl;
        cout << "0. EXIT" << endl;

        cout << "CHOICE: ";
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

            cout << "STUDENT PORTAL" << endl;

            break;


        case 4:

            cout << "RESULT PORTAL" << endl;

            break;


        case 0:

            cout << "Thank You!" << endl;

            break;


        default:

            cout << "Invalid Choice!" << endl;

            break;
        }

    } while (choice != 0);

    return 0;
}

