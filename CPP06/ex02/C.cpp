#include "C.hpp"

C::C(): Base()
{
	// Constructor implementation
}

C::~C()
{
	// Destructor implementation
}

C::C(const C& other): Base()
{
	(void)other;
}

C& C::operator=(const C& other)
{
	if (this == &other) {
		return *this;
	}
	// Assignment operator implementation
	return *this;
}

void C::display() const
{
	std::cout << "this is the C class" << std::endl;
}
