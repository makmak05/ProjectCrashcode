#include <iostream>

int* allocateNumber() {
    int* numPtr = new int;  // Dynamic memory allocation
    *numPtr = 42;  // Assigning a value to the allocated memory
    return numPtr;  // Returning the pointer to the allocated memory
}

void printNumber(int* numPtr) {
    std::cout << "Value: " << *numPtr << std::endl;
    delete numPtr;  // Freeing the allocated memory
}

int main() {
    int* ptr = allocateNumber();  // Calling the function to allocate memory and get the pointer
    printNumber(ptr);  // Calling the function to print the value using the pointer
    return 0;
}
