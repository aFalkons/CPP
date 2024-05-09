#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"


Base::Base()
{
	// Constructor implementation
}

Base::~Base()
{
	// Destructor implementation
}

Base::Base(const Base& other)
{
	(void)other;
}

Base& Base::operator=(const Base& other)
{
	if (this == &other) {
		return *this;
	}
	// Assignment operator implementation
	return *this;
}

void Base::display() const
{
	std::cout << "this is the unefined class" << std::endl;
}

Base *Base::generate()
{
	int choice = time(0) % 3;

	switch (choice) {
		case 0:
			return new A();
		case 1:
			return new B();
		case 2:
			return new C();
		default:
			return 0;
	}
}


void Base::identify(Base* p)
{
	if (dynamic_cast<A*>(p))
	{
		std::cout << "this is A class" << std::endl;
	}
	else if (dynamic_cast<B*>(p))
	{
		std::cout << "this is B class" << std::endl;
	}
	else if (dynamic_cast<C*>(p))
	{
		std::cout << "this is C class" << std::endl;
	}
	else
	{
		std::cout << "Unknown object type\n";
	}
}

void Base::identify(Base& p)
{
	this->identify(&p);
}