/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dperez-z <dperez-z@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 16:51:16 by dperez-z          #+#    #+#             */
/*   Updated: 2021/12/28 08:59:15 by dperez-z         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include "Bureaucrat.hpp"

int main(void)
{
	
	{
		Bureaucrat bob("Bob",50);
		std::cout << bob;
		Bureaucrat bob1(bob);
		std::cout << bob1;
		Bureaucrat bob2("tmp",70);
        std::cout << bob2;
		bob2 = bob;
		std::cout << bob2;
	}
   
	std::cout << "---- Trying increment Grade --------" << std::endl;
	std::cin.ignore();
	{
		Bureaucrat jack("Jack",75);
		std::cout << jack;
		jack.incrementGrade();
		std::cout << jack;
		jack.incrementGrade();
		std::cout << jack;
		jack.incrementGrade();
		std::cout << jack;
		jack.incrementGrade();
		std::cout << jack;
	}
    
	std::cout << "---- Trying decrement Grade --------" << std::endl;
	std::cin.ignore();
	{
		Bureaucrat james("James",75);
		std::cout << james;
		james.decrementGrade();
		std::cout << james;
		james.decrementGrade();
		std::cout << james;
		james.decrementGrade();
		std::cout << james;
		james.decrementGrade();
		std::cout << james;
	}
    
	std::cout << "---- Using try/catch increment --------" << std::endl;
	std::cin.ignore();
	{
		try
		{
			Bureaucrat toto("Toto",1);
			std::cout << toto;
			toto.incrementGrade();
			std::cout << toto;
		}
		catch (std::exception const & e)
		{
			std::cout << e.what() << std::endl;
		}	
	}
    
	std::cout << "---- Using try/catch decrement --------" << std::endl;
	std::cin.ignore();
	{
		try
		{
			Bureaucrat titi("Titi",150);
            std::cout << titi;
			titi.decrementGrade();
			std::cout << titi;
		}
		catch (std::exception const & e)
		{
			std::cout << e.what() << std::endl;
		}	
	}
    
	return (0);
}