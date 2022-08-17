#include "iter.hpp"

class Awesome
{
public:
	Awesome( void ) : _n( 42 ) { return; }
	int get( void ) const { return this->_n; }
private:
	int _n;
};

std::ostream & operator<<( std::ostream & o, Awesome const & rhs ) { o << rhs.get(); return o; }

template< typename T >
void print( T const & x ) { std::cout << x << std::endl; return; }

void	review_test(void)
{
	std::cout << "\n---- review test ----" << std::endl;
	int tab[] = { 0, 1, 2, 3, 4 }; // <--- I never understood why you can't write int[] tab. Wouldn't that make more sense?
	Awesome tab2[5];
	iter( tab, 5, print );
	iter( tab2, 5, print );
}

void	two_times(int &num)
{
	num = num * 2;
}

int	main(void)
{
	int	a[] = {1, 2, 3, 4};
	std::cout << "before" << std::endl;
	for (size_t i = 0; i < 4; i++)
	{
		std::cout << a[i] << std::endl;
	}
	iter(a, 4, two_times);
	std::cout << "after" << std::endl;
	for (size_t i = 0; i < 4; i++)
	{
		std::cout << a[i] << std::endl;
	}

	review_test();
	return 0;
}
