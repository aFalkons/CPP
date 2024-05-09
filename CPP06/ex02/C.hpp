#ifndef C_HPP
#define C_HPP

#include "Base.hpp"

class C: public Base
{
public:
	// Constructor
	C();

	// Destructor
	~C();

	// Copy Constructor
	C(const C& other);

	// Assignment Operator Overload
	C& operator=(const C& other);
	void display() const;
};

#endif /* C_HPP */
