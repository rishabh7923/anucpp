/*
WAP in c++ to find the sum of two integer and an double data members by using constructor overloading.
*/

#include <iostream>
using namespace std;

class Sum {
private:
    int int1, int2;
    double doubleVal;

public:
    // Constructor for two integers
    Sum(int a, int b) : int1(a), int2(b), doubleVal(0.0) {}

    // Constructor for two integers and a double
    Sum(int a, int b, double c) : int1(a), int2(b), doubleVal(c) {}

    double getSum() const {
        return int1 + int2 + doubleVal;
    }

    void displayData() const {
        cout << "Integer 1: " << int1 << endl;
        cout << "Integer 2: " << int2 << endl;
        cout << "Double: " << doubleVal << endl;
        cout << "Sum: " << getSum() << endl;
    }
};

int main() {
    // object with two integers
    Sum sum1(10, 20);
    cout << "Sum1 Data:" << endl;
    sum1.displayData();
    cout << endl;

    // object with two integers and a double
    Sum sum2(10, 20, 30.5);
    cout << "Sum2 Data:" << endl;
    sum2.displayData();

    return 0;
}
