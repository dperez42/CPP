/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dperez-z <dperez-z@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 18:07:34 by dperez-z          #+#    #+#             */
/*   Updated: 2022/01/12 19:42:35 by dperez-z         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 #include <iostream>
 #include <cstdlib>
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
void print( T & x ) { std::cout << x << std::endl; return; }

template<typename T>
void	display( T &x )
{
	std::cout << "Variable's value is: " << x << std::endl;
}

template<typename T>
void	plusone( T &x )
{
	x = x + 1;
    //std::cout << "Variable's value is: " << x << std::endl;
}

template<typename T>
void	plusgreeting( T &x )
{
	x = x + " Hello";
    //std::cout << "Variable's value is: " << x << std::endl;
}

int	main( void )
 {
 	std::string	strTable[3];
 	int			intTable[7] = {3, 5, 6, 4, 9, 11,0};
	char		chrTable[3];

 	strTable[0] = "Hi how are you?";
 	strTable[1] = "Fine, and you dear sir?";
 	strTable[2] = "Very fine indeed!";
	chrTable[0] = 'A';
	chrTable[1] = 'B';
	chrTable[2] = 'C';
 	::iter(strTable, 3, &display);
 	::iter(intTable, 7, &display);
	::iter(chrTable, 3, &display);
 	::iter(strTable, 3, &plusgreeting);
 	::iter(intTable, 6, &plusone);
	::iter(chrTable, 3, &plusone);
    ::iter(strTable, 3, &display);
 	::iter(intTable, 6, &display);
	::iter(chrTable, 3, &display);

	int tab[] = { 0, 1, 2, 3, 4 }; // <--- Qué sentido tiene no poder escribir int[] tab. No sería más simple??
	Awesome tab2[5];

	iter( tab, 5, print );
	iter( tab2, 5, print );
 }