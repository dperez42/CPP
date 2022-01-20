/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dperez-z <dperez-z@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 18:07:57 by dperez-z          #+#    #+#             */
/*   Updated: 2022/01/12 19:36:07 by dperez-z         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

class
Awesome {
	public:
		int x;
		Awesome( int n ) : _n( n ) {}
		bool operator==( Awesome const & rhs ) const { return (this->_n == rhs._n); }
		bool operator!=( Awesome const & rhs ) const{ return (this->_n != rhs._n); }
		bool operator>( Awesome const & rhs ) const { return (this->_n > rhs._n); }
		bool operator<( Awesome const & rhs ) const { return (this->_n < rhs._n); }
		bool operator>=( Awesome const & rhs ) const { return (this->_n >= rhs._n); }
		bool operator<=( Awesome const & rhs ) const { return (this->_n <= rhs._n); }
		
		int get_n() const { return _n; }
	private:
		int _n;
};

std::ostream & operator<<(std::ostream & o, const Awesome &a) { o << a.get_n(); return o; }

int	main( void )
 {
 	int			a, b;
 	float		c, d;
 	char		e, f;
 	std::string g, h;
 
 	a = 1;
 	b = 2;
 	c = 4.2f;
 	d = 42.21f;
 	e = 'a';
 	f = 'x';
 	g = "string1";
 	h = "string2";
 	std::cout << "a: " << a << " and b: " << b << std::endl;
 	std::cout << "c: " << c << " and d: " << d << std::endl;
 	std::cout << "e: " << e << " and f: " << f << std::endl;
 	std::cout << "g: " << g << " and h: " << h << std::endl;
 	std::cout << "Now calling swap on all these..." << std::endl;
 	::swap(a, b);
 	::swap(c, d);
 	::swap(e, f);
 	::swap(g, h);
 	std::cout << "a: " << a << " and b: " << b << std::endl;
 	std::cout << "c: " << c << " and d: " << d << std::endl;
 	std::cout << "e: " << e << " and f: " << f << std::endl;
 	std::cout << "g: " << g << " and h: " << h << std::endl;
 	std::cout << "min(a, b): " << ::min(a, b) << std::endl;
 	std::cout << "max(a, b): " << ::max(a, b) << std::endl;
 	std::cout << "min(c, d): " << ::min(c, d) << std::endl;
 	std::cout << "max(c, d): " << ::max(c, d) << std::endl;
 	std::cout << "min(e, f): " << ::min(e, f) << std::endl;
 	std::cout << "max(e, f): " << ::max(e, f) << std::endl;
 	std::cout << "min(g, h): " << ::min(g, h) << std::endl;
 	std::cout << "max(g, h): " << ::max(g, h) << std::endl;
	//::swap(a, g);
	std::cin.ignore();
	Awesome aa(2), bb(4);

	swap(aa, bb);
	std::cout << aa << " " << bb << std::endl;
	std::cout << max(aa, bb) << std::endl;
	std::cout << min(aa, bb) << std::endl;
	return (0);
 }