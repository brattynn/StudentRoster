# 🎓 C++ Student Roster Management System  

![C++](https://img.shields.io/badge/Language-C++-00599C?logo=c%2B%2B&logoColor=white)
![OOP](https://img.shields.io/badge/Paradigm-OOP-blueviolet)
![Platform](https://img.shields.io/badge/Platform-Console-lightgrey)
![IDE](https://img.shields.io/badge/IDE-Visual%20Studio%20%7C%20Xcode-007ACC?logo=visualstudio)


This project is a **C++ application** developed as part of my coursework, where I migrated a simplified university student system into an object-oriented design. The goal was to demonstrate fundamental and intermediate programming skills, including arrays, pointers, control structures, and object-oriented programming.  

The application maintains a roster of students in a course, processes student data, validates email addresses, calculates averages, and allows for student removal by ID.  

---

## 🔑 Features Implemented  

- **Student Class**  
  - Encapsulates student data including ID, first name, last name, email, age, days to complete courses, and degree program.  
  - Implemented constructors, getters, setters, and a `print()` method for output.  

- **Roster Class**  
  - Stores an array of pointers to `Student` objects.  
  - Parses provided raw data into structured `Student` objects.  
  - Supports:  
    - `add()` – Insert new students into the roster  
    - `remove()` – Remove a student by ID with error handling  
    - `printAll()` – Display all students in a formatted list  
    - `printAverageDaysInCourse()` – Calculate average completion days for a student  
    - `printInvalidEmails()` – Identify and display invalid email addresses  
    - `printByDegreeProgram()` – Filter students by degree type  

- **Degree Enum**  
  - Created an enumerated type `DegreeProgram {SECURITY, NETWORK, SOFTWARE}` for categorizing students.  

- **Main Program Flow**  
  - Displayed course details and developer information.  
  - Instantiated the `Roster` class and loaded five sample students (including my own information).  
  - Demonstrated all required functionality via function calls:
    - Print all students  
    - Validate emails  
    - Print average course days  
    - Print by degree program (SOFTWARE)  
    - Remove students and handle invalid removals gracefully  
  - Implemented a destructor to free dynamically allocated memory.  

---

- ## 📂 Project Structure  
  - degree.h // Enum for degree programs
  - student.h // Student class header
  - student.cpp // Student class implementation
  - roster.h // Roster class header
  - roster.cpp // Roster class implementation
  - main.cpp // Driver program demonstrating functionality


---

## 💻 Skills Demonstrated  

- Object-Oriented Programming (OOP): Classes, encapsulation, constructors, destructors  
- Memory Management: Use of pointers and dynamic allocation  
- Arrays: Storing and managing collections of `Student` objects  
- Control Structures: Loops and conditionals for data processing  
- Input Parsing: Converted raw string data into structured objects  
- Data Validation: Email format checking  
- Professional Coding Standards: Clean, modular, and reusable code  

---

## 📸 Example Console Output  

The program outputs a formatted roster of students, average course days, invalid emails, and filtered lists by degree program. Example:  

Course: C++ Roster Project
Language: C++
Student ID: [Your WGU ID]
Name: [Your Name]
Displaying all students:
A1 First Name: John Last Name: Smith Age: 20 daysInCourse: {30, 35, 40} Degree Program: SECURITY
...
Displaying invalid emails:
John1989@gm ail.com
Erickson_1990@gmailcom
The_lawyer99yahoo.com
Average days in course for each student:
Student A1: 35
...
Printing students in SOFTWARE program:
A3, A5


---

## 🚀 Outcome  

This project provided hands-on experience in:  

- Designing and implementing **multi-file C++ applications**  
- Applying **OOP principles** to solve real-world problems  
- Managing **memory with pointers and destructors**  
- Writing code that is both **functional and interview-ready**  

---

## 🛠️ Tech Stack  

- **Language**: C++  
- **IDE**: Visual Studio / Xcode  
- **Paradigm**: Object-Oriented Programming  

