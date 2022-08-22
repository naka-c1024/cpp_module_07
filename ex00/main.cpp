#include "whatever.hpp"
#include <iostream>

class
Awesome {
public:
	Awesome( int n ) : _n( n ) {}
	bool operator==( Awesome const & rhs ) const { return (this->_n == rhs._n); }
	bool operator!=( Awesome const & rhs ) const{ return (this->_n != rhs._n); }
	bool operator>( Awesome const & rhs ) const { return (this->_n > rhs._n); }
	bool operator<( Awesome const & rhs ) const { return (this->_n < rhs._n); }
	bool operator>=( Awesome const & rhs ) const { return (this->_n >= rhs._n); }
	bool operator<=( Awesome const & rhs ) const { return (this->_n <= rhs._n); }
private:
	int _n;
};

void	awesome_tests(void)
{
	std::cout << "\n---- Awesome tests ----" << std::endl;
	Awesome	a(42);
	Awesome	b(24);

	std::cout << "a == b: " << (a == b) << std::endl;
	std::cout << "a != b: " << (a != b) << std::endl;
	std::cout << "a > b: " << (a > b) << std::endl;
	std::cout << "a < b: " << (a < b) << std::endl;
	std::cout << "a >= b: " << (a >= b) << std::endl;
	std::cout << "a <= b: " << (a <= b) << std::endl;
}

int		main( void ) {

	int a = 2;
	int b = 3;

	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;

	std::string c = "chaine1";
	std::string d = "chaine2";

	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;

	awesome_tests();

	std::cout << "\n---- const tests ----" << std::endl;
	const int	cnst1 = 42;
	const int	cnst2 = -24;
	std::cout << "cnst1 = " << cnst1 << ", cnst2 = " << cnst2 << std::endl;
	std::cout << "min( cnst1, cnst2 ) = " << ::min( cnst1, cnst2 ) << std::endl;
	std::cout << "max( cnst1, cnst2 ) = " << ::max( cnst1, cnst2 ) << std::endl;

	return 0;
}
