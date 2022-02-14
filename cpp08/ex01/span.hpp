/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dperez-z <dperez-z@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 16:20:11 by dperez-z          #+#    #+#             */
/*   Updated: 2022/01/20 19:59:19 by dperez-z         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include <algorithm>

class Span
{
	private:
		unsigned int 		_size;
		std::vector<int>	_values;
		int					_assignedValues;

	public:
		Span(unsigned int n);
		Span(const Span &copy);
		~Span(void);
		//operators
		Span	&operator=(const Span &op);
		//functions
		void	addNumber(int n);
		void	addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end);
		//Getters
		int value(int i);
		void print();
		
		int	shortestSpan(void) const;
		int	longestSpan(void) const;

		class	PositionAccessException : public std::exception
		{
			virtual const char * what() const throw()
			{
				return "\033[1;32mImpossible to add that number\033[0m";
			}
		};
	
		class	PositionOutsideRangeException : public std::exception
		{
			virtual const char * what() const throw()
			{
				return "\033[1;32mPosition outside values\033[0m";
			}
		};

		class	NoNumbersToSpan : public std::exception
		{
			virtual const char * what() const throw()
			{
				return "\033[1;32mImpossible to span\033[0m";
			}
		};
};