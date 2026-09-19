# Welcome Back to School - School Management System

A console-based **School Management System** developed using **C++**.

This project is designed using basic C++ concepts such as classes, arrays, loops, conditional statements, switch statements, and functions. It provides separate portals for Admin, Teacher, Student, and Result management.

## Features

### Admin Portal

The Admin can:

* Register an admin account
* Login to the admin account
* Manage teacher accounts
* Manage student accounts
* Manage student results

### Teacher Account

The Admin can manage teachers using:

* Add Teacher
* Update Teacher
* Delete Teacher
* Show Teacher
* View Teacher Salary
* Show All Teachers

### Student Account

The Admin can manage students using:

* Add Student
* Update Student
* Delete Student
* Show Student

### Result Management

The Result section provides:

* Search Student Result
* Show All Student Results
* Edit Student Marks
* Internal Marks
* On Paper Marks
* Subject-wise Total

### Teacher Portal

Teachers can:

* Register
* Login
* Add Student Marks
* View Student Result

### Student Portal

Students can:

* Login using Student ID and Password
* View Student Details
* View Result

## Subjects

The project currently contains five subjects:

| No. | Subject |
| --- | ------- |
| 1   | MA-102  |
| 2   | EN-102  |
| 3   | CS-111  |
| 4   | HS-107  |
| 5   | MT-101  |

## Technologies Used

* C++
* Object-Oriented Programming
* Arrays
* Classes
* Functions
* `if-else`
* `switch`
* `for` loop
* `do-while` loop
* Strings

## Project Structure

```text
School Management System
│
├── Admin Class
│   ├── Admin Registration
│   ├── Admin Login
│   ├── Teacher Account
│   ├── Student Account
│   └── Result Management
│
├── Teacher Class
│   ├── Registration
│   ├── Login
│   ├── Add Marks
│   └── View Result
│
├── Student Class
│   ├── Login
│   ├── Student Details
│   └── View Result
│
├── Result Class
│   ├── Search Result
│   ├── Show Result
│   └── Edit Result
│
└── main()
    └── Main Menu
```

## Data Storage

The project uses arrays to store data.

Teacher data:

```cpp
string teacherId[10];
string teacherName[10];
string teacherSubject[10];
string teacherSalary[10];
```

Student data:

```cpp
string studentId[10];
string studentName[10];
string studentSurname[10];
string studentFatherName[10];
string studentClass[10];
string studentPassword[10];
```

Result data:

```cpp
int internal[10][5];
int onPaper[10][5];
```

The project can store data for up to **10 teachers and 10 students** during program execution.

## How to Run

### 1. Clone the Repository

```bash
git clone https://github.com/aastha-waghade/School-Management-System.git
```

### 2. Open the Project

Open the project folder in:

* VS Code
* Code::Blocks
* Any C++ supported IDE

### 3. Compile the Program

Using GCC:

```bash
g++ main.cpp -o school
```

### 4. Run the Program

Windows:

```bash
school.exe
```

or:

```bash
.\school.exe
```

## Main Menu

```text
====================================
       WELCOME BACK TO SCHOOL
====================================

MENU:
1. ADMIN PORTAL
2. TEACHER PORTAL
3. STUDENT PORTAL
4. RESULT PORTAL
0. EXIT
```

## Concepts Used

This project was created to practice basic C++ programming concepts:

* Classes and Objects
* Arrays
* Two-dimensional arrays
* Variables
* Strings
* `if-else`
* `switch-case`
* `for` loops
* `do-while` loops
* Functions
* Searching
* Updating data
* Deleting array data
* Menu-driven programming

## Limitations

Currently, the data is stored only while the program is running.

When the program is closed, the stored teacher, student, and result data is lost.

File handling and database connectivity can be added in the future.

## Future Improvements

Possible future improvements include:

* File handling for permanent data storage
* Database connectivity
* Automatic ID generation
* Better login system
* Attendance management
* Fee management
* Timetable management
* More detailed result calculations
* Improved user interface

## Author

**Aastha Waghade**

Computer Science Engineering Student

GitHub: `https://github.com/aastha-waghade`

LinkedIn: `https://www.linkedin.com/in/aastha-waghade-838022338/`
