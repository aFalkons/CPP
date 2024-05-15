#include <iostream>
#include <vector>
#include <algorithm>

template <typename T>
bool	easyfind(const std::vector<T>& stack, int to_find)
{
	std::vector<int>::const_iterator res = std::find(stack.begin(), stack.end(), to_find);

	if (res == stack.end())
		return(false);
	else
		return(true);
}