/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dperez-z <dperez-z@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 18:06:37 by dperez-z          #+#    #+#             */
/*   Updated: 2022/01/12 18:06:38 by dperez-z         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>

 template<typename T>
 class Array
 {
  private:
 
 	int		_size;
 	T		*_array;

 public:
 
 	Array<T>( void ): _size(0), _array(NULL)
 	{
 		std::cout << "Empty constructor called" << std::endl;
 	}
 	Array<T>( const unsigned int size ): _size(size)
 	{
 		std::cout << "Size constructor called" << std::endl;
 		if (size < 0)
 			throw std::overflow_error("\033[1;32mIndex out of bounds \033[0m");
 		this->_array = new T[size];
 	}
 	Array<T>( const Array<T> &instance )
 	{
 		std::cout << "Copy constructor called" << std::endl;
 		*this = instance;
 	}
 	~Array<T>( void )
 	{
 		std::cout << "Destructor called" << std::endl;
 		if (this->_size > 0)
 			delete [] this->_array;
 	}
    //Operators
 	Array<T>	&operator=( const Array<T> &instance )
 	{
 		std::cout << "Assignation overload called" << std::endl;
 		if (this == &instance)
 			return *this;
 		if (this->_size > 0)
 			delete [] this->_array;
 		this->_size = instance.size();
 		this->_array = new T[this->_size];
 		for (int i = 0; i < this->_size; i++)
 			this->_array[i] = instance[i];
 		return *this;
 	}
 	
    T			&operator[](const int index) const
 	{
 		if (index>= this->_size || index< 0)
 			throw std::overflow_error("\033[1;32mIndex out of bounds \033[0m");
 		return this->_array[index];
 	}
    //getters
 	int			size( void ) const
 	{	return this->_size;	}
  
 };
 
 template<typename T>
 std::ostream	&operator<<( std::ostream &ostr, const Array<T> &instance );
 
 #endif