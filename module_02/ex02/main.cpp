#include "Fixed.hpp"

int main(void)
 {
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl << std::endl;

	std::cout << b << std::endl;
	std::cout << max( a, b ) << std::endl; // has to be non-member
	return 0;
}