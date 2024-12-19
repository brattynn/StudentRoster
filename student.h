#ifndef STUDENT_H
#define STUDENT_H
#include "degree.h"
#include <string>
#include <array> //For array management
using namespace std;


class Student {
    public:
        //Constructor
        Student(string id, string firstName, string lastName, string email, int studentAge, const int days[], DegreeProgram degree);
        
        //Destructor
        ~Student();

        //Getters to gather info on students -- "&" used for better efficiency
        string getStudentID();
        string getFirstName();
        string getLastName();
        string getEmail();
        int getAge();
        int* getCompletionDays(); //Returns a pointer to the array
        DegreeProgram getDegreeProgram();

        //Setters to set or change student info -- using "const" and "string&" to avoid accidental modification
        void setStudentID(const string& id);
        void setFirstName(const string& firstName);
        void setLastName(const string& lastName);
        void setEmail(const string& email);
        void setAge(int studentAge);
        void setCompletionDays(const int days[]);
        void setDegreeProgram(DegreeProgram program);

        //Enum to String Conversion
        static string degreeProgramToString(DegreeProgram degree);

        //Display all student info
        void printStudentInfo();

        const static int daysArray = 3;  //To avoid "magic" numbers floating around.

    private:
        string studentID;
        string firstName;
        string lastName;
        string emailAddress;
        int age;
        int completionDays[daysArray];
        DegreeProgram degreeProgram;
};

#endif