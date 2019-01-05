// A little exercise on structs and creating a basic
// database to store student information

#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>

using namespace std;

struct nameType
{
  string first;
  string last;
};

struct majorType
{
  string majorName;
  float gpa;
};

// struct address
// {
//   string street;
//   string zip;
//   string city;
//   string state;
// };

// struct personalInformation
// {
//   int age;
//   string gender;
//   string email;
//   string cell;
// };

// struct dateType
// {
//   int month;
//   int day;
//   int year;
// };

struct studentType
{


  nameType name;
  majorType information;
  // string address;
  // string personalInformation;

  // double salary;

  // dateType hireDate;
  // dateType quitDate;

};

int main() {

// establisb somewhere to dump employee data
  ofstream outputFile;
  outputFile.open("students.dat", fstream::app);

// Create new student
  studentType newStudent;

// Probe to attain newStudent information
  cout << "What's the student's first name?\n\n";
  cin >> newStudent.name.first;
  outputFile << "First: " << newStudent.name.first << "\n";

  cout << "And their last name?\n\n";
  cin >> newStudent.name.last;
  outputFile << "Last: " << newStudent.name.last << "\n";
  // outputFile << newStudent.name.last << "\n";

  cout << "\n\n What is their major?\n\n";
  cin >> newStudent.information.majorName;
  outputFile << "Major: " << newStudent.information.majorName << "\n";

  cout << "What is their GPA?\n\n";
  cin >> newStudent.information.gpa;
  outputFile << "GPA: " << newStudent.information.gpa;

  outputFile << "\n-------\n";

  outputFile.close();

  return 0;
}
