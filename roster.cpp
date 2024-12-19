#include <iostream>
#include <string>
#include "roster.h"

//Parses a row of data and adds student to roster
void Roster::parse(const string& row) { 
    size_t lhs = 0;
    size_t rhs;

    //Helper to extract and move to next part
    auto extractNext = [&]() {
        rhs = row.find(",", lhs);
        string value = row.substr(lhs, rhs - lhs);
        lhs = rhs + 1;
        return value;};

    //Extract values
    string studentID = extractNext();
    string firstName = extractNext();
    string lastName = extractNext();
    string emailAddress = extractNext();
    int age = stoi(extractNext());
    int daysInCourse1 = stoi(extractNext());
    int daysInCourse2 = stoi(extractNext());
    int daysInCourse3 = stoi(extractNext());
    string degreeProgramStr = extractNext();

    //Map string to Enum
    DegreeProgram degreeProgram = (degreeProgramStr == "SECURITY") ? SECURITY
                                : (degreeProgramStr == "NETWORK") ? NETWORK
                                : SOFTWARE;
    
    //Add new student
    add(studentID, firstName, lastName, emailAddress, age, daysInCourse1, daysInCourse2, daysInCourse3, degreeProgram);}

//Add new student to roster
void Roster::add(
    const string& studentID,
    const string& firstName,
    const string& lastName,
    const string& emailAddress,
    int age,
    int daysInCourse1,
    int daysInCourse2,
    int daysInCourse3,
    DegreeProgram degreeProgram) {
        int numCourseDays[3] = {daysInCourse1, daysInCourse2, daysInCourse3};
        classRosterArray[++lastIndex] = new Student(studentID, firstName, lastName, emailAddress, age, numCourseDays, degreeProgram);}


//Remove a student from roster by ID
void Roster::remove(const string& studentID) {
    for (int i = 0; i <= lastIndex; i++) {
        if (classRosterArray[i]->getStudentID() == studentID) {
            delete classRosterArray[i];
            for (int j = i; j < lastIndex; j++) {
                classRosterArray[j] = classRosterArray[j + 1];}
            classRosterArray[lastIndex--] = nullptr;
            cout << "Student with ID " << studentID << " was removed." << endl;
            return;}}
    cout << "Student with ID " << studentID << " was not found." << endl;}


//Prints info of all students on roster
void Roster::printAll() {
    for (int i = 0; i <= lastIndex; i++) {
        classRosterArray[i]->printStudentInfo();}}


//Print average days of course completion
void Roster::printAverageDays(const string& studentID) {
    for (int i = 0; i <=lastIndex; i++) {
        if (classRosterArray[i]->getStudentID() == studentID) {
            const auto& days = classRosterArray[i]->getCompletionDays();
            cout << "Student with ID " << studentID << " has an average of " << (days[0] + days[1] + days[2]) / 3 << " days in courses." << endl;
            return;}}
    cout << "Student with ID " << studentID << " not found." << endl;}


//Prints all bad email address entries
void Roster::printBadEmails() {
    for (int i = 0; i <= lastIndex; i++) {
        string email = classRosterArray[i]->getEmail();
        if (email.find(' ') != string::npos || email.find('@') == string::npos || email.find('.') == string::npos) {
            cout << "Invalid email address: " << email << endl;}}}


//Prints students in a selected degree program
void Roster::printByDegree(DegreeProgram degreeProgram) {
    for (int i = 0; i <= lastIndex; i++) {
        if (classRosterArray[i]->getDegreeProgram() == degreeProgram) {
            classRosterArray[i]->printStudentInfo();}}}


//Destructor
Roster::~Roster() {
    for (int i = 0; i <= lastIndex; i++) {
        delete classRosterArray[i];}}


//Added this line after having issues in main.cpp file with trying to call classRosterArray
string Roster::getStudentIDAtIndex(int index) {
    if (index >= 0 && index <= lastIndex) {
        return classRosterArray[index]->getStudentID();}
    else {
        return "";}}  //Returns an empty string if the index is out of bounds