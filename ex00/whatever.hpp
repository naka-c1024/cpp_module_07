#ifndef WHATEVER_HPP
#define WHATEVER_HPP

template <typename T>
void	swap(T &lhs, T &rhs)
{
	T	tmp;

	tmp = lhs;
	lhs = rhs;
	rhs = tmp;
}

template <typename T>
T	min(const T lhs, const T rhs)
{
	if (lhs < rhs)
		return lhs;
	else
		return rhs;
}

template <typename T>
T	max(const T lhs, const T rhs)
{
	if (lhs > rhs)
		return lhs;
	else
		return rhs;
}

#endif /* WHATEVER_HPP */
