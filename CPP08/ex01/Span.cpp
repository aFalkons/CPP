#include "Span.hpp"

Span::Span(unsigned int N)
{
	this->len = N;
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
	if (this->len == this->vec.size())
		//throw errore
	this->vec.push_back(newN);
}

unsigned int Span::shortestSpan()
{
	if (this->vec.size() < 2)
		//throw errore
}

unsigned int Span::longestSpan()
{

}
