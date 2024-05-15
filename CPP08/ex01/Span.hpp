#pragma once

#include <vector>
#include <algorithm>

class Span
{
private:

	std::vector<int>	vec;
	unsigned int		len;

public:
	// Constructor
	Span(unsigned int N);

	// Destructor
	~Span();

	// Copy Constructor
	Span(const Span& other);

	// Assignment Operator Overload
	Span& operator=(const Span& other);

	//function
	void			addNumber(int newN);
	unsigned int	shortestSpan();
	unsigned int	longestSpan();
};