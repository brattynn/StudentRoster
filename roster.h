#ifndef ROSTER_H
#define ROSTER_H
#include "student.h"
#include <string>

class Roster {

    public:
        void parse(const string& row);      //Reads data, splits it up, adds student to roster
        
        //Add a student
        void add(
            const string& studentID,
            const string& firstName,
            const string& lastName,
            const string& emailAddress,
            int age,
            int daysInCourse1,
            int daysInCourse2,
            int daysInCourse3,
            DegreeProgram degreeProgram);
        
        //Remove student from roster by ID
        void remove(const string& studentID);

        //Print info of all students on roster
        void printAll();

        //Print Average number of days in course
        void printAverageDays(const string& studentID);

        //Prints bad email entries
        void printBadEmails();

        //Prints students in a specified degree program
        void printByDegree(DegreeProgram degreeProgram);

        //Destructor
        ~Roster();

        //Added this line after having issues in main.cpp file with trying to call classRosterArray
        string getStudentIDAtIndex(int index);


    private:
        static const int maxStudents = 5;
        Student* classRosterArray[maxStudents];
        int lastIndex = -1;
};

#endif