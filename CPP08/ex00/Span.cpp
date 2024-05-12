#include "Span.hpp"

Span::Span(unsigned int N)
{
	int tmp[N];
	this->SpanArr = tmp;
}

Span::~Span()
{
	// Destructor implementation
}

Span::Span(const Span& other)
{
	// Copy constructor implementation
}

Span& Span::operator=(const Span& other)
{
	if (this == &other) {
		return *this;
	}
	// Assignment operator implementation
	return *this;
}

void Span::addNumber(int newN)
{
	static int cont;
	

}

unsigned int Span::shortestSpan()
{
}

unsigned int Span::longestSpan()
{
}
