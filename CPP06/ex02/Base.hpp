#ifndef BASE_HPP
#define BASE_HPP

#include <iostream>
#include <cstdlib>
#include <ctime>


class Base {
public:
	// Constructor
	Base();

	// Destructor
	virtual ~Base();

	// Copy Constructor
	Base(const Base& other);

	// Assignment Operator Overload
	Base& operator=(const Base& other);

	virtual void display() const;
	Base *generate();
	void identify(Base* p);
	void identify(Base& p);
};

#endif /* Base_HPP */
