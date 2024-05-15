 #include "easyfind.hpp"

int	main(void)
{
	std::vector<int> stack;

	stack.push_back(39);
	stack.push_back(32);
	stack.push_back(42);
	stack.push_back(111);
	stack.push_back(605169);
	if (easyfind<int>(stack, 42) == true)
		std::cout << "find" << std::endl;
	else
		std::cout << "not find" << std::endl;
	return (0);
}