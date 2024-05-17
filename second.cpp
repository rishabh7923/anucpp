/*
  WAP in c+ + that initialize the data member through the help of objects
*/

#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string Name;
    int RollNo;

public:
    Student(string name, int rollNo) : Name(name), RollNo(rollNo) {}

    void displayData() const {
        cout << "Name: " << Name << endl;
        cout << "Roll Number: " << RollNo << endl;
    }
};

int main() {
    Student student("Pinky Singh", 101);
    student.displayData();

    return 0;
}
