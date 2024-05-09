
#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"


int main()
{
	Base	TheBase;

	Base *test = TheBase.generate();
	TheBase.identify(test);
	TheBase.identify(*test);
	delete  test;
}
