#include <iostream>
#include "iter.hpp"

// La funzione di esempio che verrà utilizzata con iter
template <typename T>
T square(T x) {
    std::cout << x * x << std::endl;
    return(x);
}

// La funzione iter deve essere inclusa qui

int main() {
    int intArray[] = {1, 2, 3, 4, 5};
    double doubleArray[] = {1.1, 2.2, 3.3, 4.4, 5.5};
    char charArray[] = {'a', 'b', 'c', 'd', 'e'};

    // Test con array di interi
    std::cout << "Array di interi: " << std::endl;
    iter(intArray, 5, square<int>);
    std::cout << std::endl;

    // Test con array di double
    std::cout << "Array di double: " << std::endl;
    iter(doubleArray, 5, square<double>);
    std::cout << std::endl;

    // Test con array di char
    std::cout << "Array di char: " << std::endl;
    iter(charArray, 5, square<char>);
    std::cout << std::endl;

    return 0;
}
