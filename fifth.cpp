/*
WAP in C++ to find the sum of given two no by defining the constructor outside of the class
*/

#include <iostream>

class SumCalculator {
    private:
        int num1;
        int num2;
    
    public:
        SumCalculator(int a, int b);

        int calculateSum() const {
            return num1 + num2;
        }
};

// Constructor definition
SumCalculator::SumCalculator(int a, int b) {
    num1 = a;
    num2 = b;
}

int main() {
    int num1, num2;
    std::cout << "Enter two numbers: ";
    std::cin >> num1 >> num2;

    SumCalculator calculator(num1, num2);


    std::cout << "Sum of " << num1 << " and " << num2 << " is " << calculator.calculateSum() << std::endl;

    return 0;
}
