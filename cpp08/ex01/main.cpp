/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dperez-z <dperez-z@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 16:20:02 by dperez-z          #+#    #+#             */
/*   Updated: 2022/01/20 19:54:28 by dperez-z         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"
#include <iostream>

int main(void)
{
	try
	{
		Span			span	(10000);
		Span 				sp = Span(5);

		std::vector<int>	range;

		for (int i = 0; i < 10000; i++)
			range.push_back(i);
			
		span.addNumber(range.begin(), range.end());
		std::cout << "\033[1;35mThis is my span\033[0m" << std::endl;
		span.print();
		std::cout << "\033[1;35mpress enter\033[0m" << std::endl;
		std::cin.ignore();
		
		std::cout << "\033[1;35mShortest\033[0m" << std::endl;
		std::cout << span.shortestSpan() << std::endl;
		std::cout << "\033[1;35mLongest\033[0m" << std::endl;
		std::cout << span.longestSpan() << std::endl;
		std::cin.ignore();
		
		//ahother span
		std::cout << "\033[1;35mNew Data\033[0m" << std::endl;
		sp.addNumber(5);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(10000001);
		std::cout << "\033[1;35mThis is my new span\033[0m" << std::endl;
		sp.print();
		std::cout << "\033[1;35mShortest\033[0m" << std::endl;
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << "\033[1;35mLongest\033[0m" << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}