#include "Fixed.hpp"

void	compare(Fixed &c, Fixed &d)
{
	std::cout << "\n\nFixed c = " << c << std::endl;
	std::cout << "Fixed d = " << d << std::endl << std::endl;

	if (c > d)
		std::cout << c << " > " << d << std::endl;
	
	if (c >= d)
		std::cout << c << " >= " << d << std::endl;

	if (c < d)
		std::cout << c << " < " << d << std::endl;
	
	if (c <= d)
		std::cout << c << " <= " << d << std::endl;

	if (c == d)
		std::cout << c << " == " << d << std::endl;
	else if (c != d)
		std::cout << c << " != " << d << std::endl;

	std::cout << "\nc * d = " << c * d << std::endl;
	std::cout << "c / d = " << c / d << std::endl;
	std::cout << "c + d = " << c + d << std::endl;
	std::cout << "c - d = " << c - d << std::endl;

	std::cout << "\nmin(c, d) = " << min(c, d) << std::endl;
}

int main(int ac, char **av)
 {
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

	std::cout << "a   = " <<  a << std::endl;
	std::cout << "++a = " << ++a << std::endl;
	std::cout << "a   = " << a << std::endl;
	std::cout << "a++ = " << a++ << std::endl;
	std::cout << "a   = " << a << std::endl << std::endl;

	std::cout << "b = " << b << std::endl;
	std::cout << "max(a, b) = " << max( a, b ) << std::endl;

	if (ac == 3)
	{
		float av2 = strtof(av[2], NULL);
		float av1 = strtof(av[1], NULL);
		if ( av1 > 500000 || av2 > 500000 )
			std::cout << "\n Warning: One of the values is very likely to cause an overflow" << std::endl;
		if ( av1 > 999999 || av2 > 999999 )
			std::cout << "\n Warning: Fixed class won't fit this value" << std::endl;
		Fixed c(av1);
		Fixed d(av2);
		compare(c, d);
	}
	else
	{
		a = 20.274f;
		compare(a, (Fixed &)b);
	}
	
	return 0;
}