#include <iostream>
#include <string>
#include "student.h"

//Constructor - initializes a Student object with data
Student::Student(string id, string firstName, string lastName, string email, int studentAge, const int days[], DegreeProgram program) {
    studentID = id;
    this->firstName = firstName;
    this->lastName = lastName;
    emailAddress = email;
    age = studentAge;
    degreeProgram = program;
    setCompletionDays(days);}


//Getter Method Implementation
string Student::getStudentID() {    //method gets the student ID
    return studentID;}

string Student::getFirstName() {    //method gets student first name
    return firstName;}

string Student::getLastName() {     //method gets student last name
    return lastName;}

string Student::getEmail() {       //method gets student email
    return emailAddress;}

int Student::getAge() {             //method gets student age
    return age;}

int* Student::getCompletionDays() {           //method gets the array of days
    return completionDays;}

DegreeProgram Student::getDegreeProgram() {     //method gets the students degree program
    return degreeProgram;}


//Setter Method Implementation
void Student::setStudentID(const string& id) {          //Sets student ID
    studentID = id;}                                    //Assigns "id" to studentID variable

void Student::setFirstName(const string& firstName) {   //Sets student first name
    this->firstName = firstName;}

void Student::setLastName(const string& lastName) {     //Sets student last name
    this->lastName = lastName;}

void Student::setEmail(const string& email) {           //Sets student email
    emailAddress = email;}                              //Assigns "email" to emailAddress variable

void Student::setAge(int studentAge) {                  //Sets student age
    age = studentAge;}                                  //Assigns "studentAge" to age

void Student::setDegreeProgram(DegreeProgram program) { //Sets student degree program
    degreeProgram = program;}                           //Assigns "program" to degreeProgram

void Student::setCompletionDays(const int days[]) {               //Sets completion days array values
    for (int i = 0; i < daysArray; i++) {               //For loop to assign values
        completionDays[i] = days[i];}}                  //Assigns "days[]" to copletionDays[]


//Enum to String conversion
string Student::degreeProgramToString(DegreeProgram program) {
    if (program == DegreeProgram::SOFTWARE) {
        return "SOFTWARE";}
    else if (program == DegreeProgram::NETWORK) {
        return "NETWORK";}
    else {
        return "SECURITY";}}


//Destructor Implementation
Student::~Student() {}


//Print all student information
void Student::printStudentInfo() {
    cout << getStudentID() << "\t";
    cout << getFirstName() << "\t";
    cout << getLastName() << "\t";
    cout << getEmail() << "\t";
    cout << getAge() << "\t";
    cout << "{" << getCompletionDays()[0] << ", " << getCompletionDays()[1] << ", " << getCompletionDays()[2] << "}" << "\t";
    cout << degreeProgramToString(getDegreeProgram()) << endl;}



