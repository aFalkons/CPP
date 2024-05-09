#ifndef B_HPP
#define B_HPP

#include "Base.hpp"

class B: public Base
{
public:
	// Constructor
	B();

	// Destructor
	~B();

	// Copy Constructor
	B(const B& other);

	// Assignment Operator Overload
	B& operator=(const B& other);
	void display() const;
};

#endif /* B_HPP */
