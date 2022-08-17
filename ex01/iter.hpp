#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template <typename T>
void	iter(T *array, size_t length, void (*funcptr)(T&))
{
	if (!array || !funcptr)
		return;
	for (size_t i = 0; i < length; i++)
	{
		funcptr(array[i]);
	}
}

template <typename T>
void	iter(T *array, size_t length, void (*funcptr)(const T&))
{
	if (!array || !funcptr)
		return;
	for (size_t i = 0; i < length; i++)
	{
		funcptr(array[i]);
	}
}

#endif /* ITER_HPP */
