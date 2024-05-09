#ifndef A_HPP
#define A_HPP

#include "Base.hpp"

class A: public Base
{
public:
	// Constructor
	A();

	// Destructor
	~A();

	// Copy Constructor
	A(const A& other);

	// Assignment Operator Overload
	A& operator=(const A& other);

	// funzioni
	void display() const;
};

#endif /* A_HPP */
