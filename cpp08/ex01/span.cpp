/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dperez-z <dperez-z@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 16:20:08 by dperez-z          #+#    #+#             */
/*   Updated: 2022/01/20 19:57:51 by dperez-z         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

Span::Span(unsigned int n) : _size(n), _assignedValues(0)
{
	this->_values.reserve(n);
	std::cout << "Span constructor called" << std::endl;
}

Span::Span(const Span &copy)
{
	std::cout << "Span copy constructor called" << std::endl;
	this->_size = copy._size;
	this->_values = copy._values;
	this->_assignedValues = copy._assignedValues;
}

Span::~Span(void)
{
	std::cout << "Span destructor called" << std::endl;
}

Span	&Span::operator=(const Span &op)
{
	if (this == &op)
		return *this;
	this->_size = op._size;
	this->_values = op._values;
	this->_assignedValues = op._assignedValues;
	return *this;
}

//join a element at first space free
void			Span::addNumber(int n)
{
	if (this->_assignedValues < (int)this->_size)
	{
		this->_values.push_back(n); //join at the end of colection
		this->_assignedValues++;
	}
	else //throw error when no space for assignement
		throw Span::PositionAccessException();
}

void			Span::addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
	this->_values.insert(this->_values.end(), begin, end);
	this->_assignedValues = end - begin;
}

int Span::value(int i)
{
	if (this->_assignedValues < i || i < 0)
		throw Span::PositionOutsideRangeException();
	return (this->_values.at(i));
}

void 	Span::print(){
	//with no iterators
	/*
	int i;
	i = 0;
	std::cout << "[ ";
	while (i < this->_assignedValues)
	{
		std::cout << this->value(i);
		if ( (i+1) < this->_assignedValues) 
			std::cout << ","; 
		i ++;
	}
	std::cout << " ]"<< std::endl;
	*/
	//with iterators
	std::cout << "[ ";
	for (std::vector<int>::const_iterator it = this->_values.begin(); it != this->_values.end(); it++)
		std::cout <<  *it << ",";
	std::cout << " ]"<< std::endl;
	return;
}

int	Span::shortestSpan(void) const
{
	int	shortest;

	shortest = INT32_MAX;
	if (this->_size <= 1 || this->_assignedValues <= 1)
		throw Span::NoNumbersToSpan();
	for (std::vector<int>::const_iterator it = this->_values.begin(); it != this->_values.end(); it++)
	{
		for (std::vector<int>::const_iterator jt = it + 1; jt != this->_values.end(); jt++)
		{
			if (std::abs(*it - *jt) < shortest)
				shortest = std::abs(*it - *jt);
		}
	}
	return shortest;
}

int	Span::longestSpan(void) const
{
	std::vector<int>	copy(this->_values);
	std::sort(copy.begin(), copy.end()); //shorting the vector
	return *(copy.end() - 1) - copy[0];
}
