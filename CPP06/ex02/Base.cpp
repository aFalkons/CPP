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
	int choice = time(0) % 3; // Randomly choose between 0, 1, or 2



	std::cout << choice << " ---- " << time(0) << std::endl;
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
