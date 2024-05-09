#include "A.hpp"

A::A(): Base()
{
	// Constructor implementation
}

A::~A()
{
	// Destructor implementation
}

A::A(const A& other): Base()
{
	(void)other;
}

A& A::operator=(const A& other)
{
	if (this == &other) {
		return *this;
	}
	// Assignment operator implementation
	return *this;
}

void A::display() const
{
	std::cout << "this is the A class" << std::endl;
}
