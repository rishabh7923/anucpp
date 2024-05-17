/*
  WAP in c++ create a class with two data member Name & rollno. and after read from member function display it.
*/

#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string Name;
    int RollNo;

public:
    void readData() {
        cout << "Enter Name: ";
        getline(cin, Name);
        cout << "Enter Roll Number: ";
        cin >> RollNo;
    }

    void displayData() const {
        cout << "Name: " << Name << endl;
        cout << "Roll Number: " << RollNo << endl;
    }
};

int main() {
    Student student;
    student.readData();
    student.displayData();
    return 0;
}
