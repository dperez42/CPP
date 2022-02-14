/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dperez-z <dperez-z@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 16:20:18 by dperez-z          #+#    #+#             */
/*   Updated: 2022/01/20 20:10:03 by dperez-z         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mutantstack.hpp"
#include <stack>

int main()
{
	MutantStack<int> mstack;

	mstack.push(5);
	mstack.push(17);
	std::cout << "Top element of mstack" << std::endl;
	std::cout << mstack.top() << std::endl;
	std::cout << "Size of mstack" << std::endl;
	std::cout << mstack.size() << std::endl;
	std::cout << "Making POP" << std::endl;
	mstack.pop();
	std::cout << "Top element of mstack" << std::endl;
	std::cout << mstack.top() << std::endl;
	std::cout << "New Size of mstack" << std::endl;
	std::cout << mstack.size() << std::endl;
	std::cin.ignore();
	
	std::cout << "---------------------------------" << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	//[...]
	mstack.push(0);
	mstack.push(1220);
	mstack.push(445550);
	
	std::cout << "The Size of mstack: ";
    std::cout << mstack.size() << std::endl;
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	++it;
	--it;
	while (it != ite)
	{
	std::cout << *it << std::endl;
	++it;
	}
	
	std::stack<int> s(mstack);
	s.
	std::cout << "The Size of s:" ;
    std::cout << s.size() << std::endl;
	
	return 0;
}