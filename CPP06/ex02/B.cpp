#include "B.hpp"

B::B(): Base()
{
	// Constructor implementation
}

B::~B()
{
	// Destructor implementation
}

B::B(const B& other): Base()
{
	(void)other;
}

B& B::operator=(const B& other)
{
	if (this == &other) {
		return *this;
	}
	// Assignment operator implementation
	return *this;
}

void B::display() const
{
	std::cout << "this is the B class" << std::endl;
}
