
#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"


int main()
{
	Base	TheBase;

	Base *test = TheBase.generate();
	std::cout << test << std::endl;
	test->display();
}
