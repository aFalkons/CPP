#include <iostream>
#include "Array.hpp"

int main() {
    // Test del costruttore senza argomenti
    Array<int> arr1;
    std::cout << "Size of arr1: " << arr1.size() << std::endl;

    // Test del costruttore con argomento
    Array<int> arr2(5);
    std::cout << "Size of arr2: " << arr2.size() << std::endl;

    // Test dell'operatore di assegnazione
    arr1 = arr2;
    std::cout << "Size of arr1 after assignment: " << arr1.size() << std::endl;

    // Test dell'operatore di accesso agli elementi
    for (unsigned int i = 0; i < arr2.size(); ++i) {
        arr2[i] = i * 10;
    }

    std::cout << "Elements of arr2: ";
    for (unsigned int i = 0; i < arr2.size(); ++i) {
        std::cout << arr2[i] << " ";
    }
    std::cout << std::endl;

    // Test per un indice fuori dal range
    try {
        std::cout << "Trying to access an element out of range..." << std::endl;
        std::cout << arr2[arr2.size()] << std::endl; // Provocare un'eccezione
    } catch (const std::out_of_range& e) {
        std::cerr << "Out of range exception caught: " << e.what() << std::endl;
    }

    return 0;
}
