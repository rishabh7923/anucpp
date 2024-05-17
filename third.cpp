/*
WAP in c++ to initialize the two data member
Emp - name & Emp-Id through the
Constructor 4 display them.
*/


#include <iostream>
#include <string>
using namespace std;

class Employee {
private:
    string EmpName;
    int EmpId;

public:
    Employee(string name, int id) : EmpName(name), EmpId(id) {}

    void displayData() const {
        cout << "Employee Name: " << EmpName << endl;
        cout << "Employee ID: " << EmpId << endl;
    }
};

int main() {
    Employee emp("Tinky Singh", 12345);
    emp.displayData();

    return 0;
}
