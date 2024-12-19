#include <iostream>
#include <string>
#include "roster.h"

int main() {
    //Array of provided student data
    const string studentData[] = {
        "A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY",
        "A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK",
        "A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE",
        "A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY",
        "A5,Brattynn,Thompson,bth1352@wgu.edu,31,20,32,16,SOFTWARE"};

    
    //Show course name and my student info
    cout << "C867 | Scripting and Programming Applications\n";
    cout << "Language Used: C++\n";
    cout << "Student ID: 011521031\n";
    cout << "Name: Brattynn Thompson\n\n";

    
    //Create a Roster to manage students
    Roster classRoster;

    //Loop through studentData array to add each student
    for (const string& data : studentData) {
        classRoster.parse(data);}

    
    //All students
    cout << "All students on roster: \n";
    classRoster.printAll();
    cout << endl;

    //Invalid Email Entries
    cout << "Showing all invalid email addresses: \n";
    classRoster.printBadEmails();
    cout << endl;

    //Average days to complete course
    for (int i = 0; i <= 4; i++) { //5 students, loops to index 4
        string studentID = classRoster.getStudentIDAtIndex(i);
        classRoster.printAverageDays(studentID);}
    cout << endl;

    //Students in SOFTWARE degree program
    cout << "All students in the Software degree program: \n";
    classRoster.printByDegree(SOFTWARE);
    cout << endl;

    //Remove a student from roster by ID and print updated roster
    cout << "Removing student with ID: A3\n";
    classRoster.remove("A3");
    classRoster.printAll();
    cout << endl;

    //Attempting to remove the same student
    cout << "Attempting to remove the same student with ID: A3 again:\n";
    classRoster.remove("A3");
    cout << endl;

    //End of program
    cout << "Program finished.\n";

    return 0;
}