/*
  WAP that read n1 integer no by using malloc() method & after input the data increase the size of memory by using realloc() method with n2 number & display all even number
*/


#include <iostream>
#include <cstdlib>

void displayEven(int *numbers, int size) {
    std::cout << "Even numbers: ";
    
    for (int i = 0; i < size; i++)
        if (numbers[i] % 2 == 0)
            std::cout << numbers[i] << " ";
            
    std::cout << std::endl;
}

int main() {
    int n1, n2;
    
    std::cout << "Enter the initial number of integers (n1): ";
    std::cin >> n1;

    int *numbers = (int*)malloc(n1 * sizeof(int));

    std::cout << "Enter " << n1 << " integers:" << std::endl;
    for (int i = 0; i < n1; i++) std::cin >> numbers[i];

    std::cout << "Enter the number of additional integers (n2): ";
    std::cin >> n2;

    numbers = (int*)realloc(numbers, (n1 + n2) * sizeof(int));

    std::cout << "Enter " << n2 << " more integers:" << std::endl;
    for (int i = n1; i < n1 + n2; i++) std::cin >> numbers[i];

    displayEven(numbers, n1 + n2);
    free(numbers);

    return 0;
}
