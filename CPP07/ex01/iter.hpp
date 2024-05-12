#pragma once

template <typename T>
void	iter(T* array, int len, T (*function)(T))
{
	for(int i = 0; i < len; i++)
	{
		function(array[i]);
	}
}