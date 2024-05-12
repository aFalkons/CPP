#pragma once

class Span
{
private:

	int *SpanArr;

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