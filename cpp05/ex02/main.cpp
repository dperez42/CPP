/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dperez-z <dperez-z@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 16:52:29 by dperez-z          #+#    #+#             */
/*   Updated: 2021/12/28 10:07:13 by dperez-z         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
 #include "RobotomyRequestForm.hpp"
 #include "ShrubberyCreationForm.hpp"


int main(void)
{
		{
		std::cout << "check ortho in Bureaucrat" << std::endl;
		std::cin.ignore();
		Bureaucrat bob("Bob",50);
		std::cout << bob;
		Bureaucrat bob1(bob);
		std::cout << bob1;
		Bureaucrat bob2("tmp",70);
        std::cout << bob2;
		bob2 = bob;
		std::cout << bob2;
	}

	{
		std::cout << "check abstract class form" << std::endl;
		//Form fbob("Bob",50,75);
	}
	
	{
		std::cout << "\033[1;32m" << "check ShrubberyCreationForm class ortho" << "\033[0m" << std::endl;
		std::cin.ignore();
		ShrubberyCreationForm p1("tt");
		std::cout << p1 << std::endl;
		ShrubberyCreationForm p2(p1);
		std::cout << p2 << std::endl;
		ShrubberyCreationForm p3("otro");
		std::cout << p3 << std::endl;
		p3 = p2;
		std::cout << p3 << std::endl;
	}

	{
		std::cout << "\033[1;32m" << "check PresidentialPardonForm class ortho" << "\033[0m" << std::endl;
		std::cin.ignore();
		PresidentialPardonForm p1("tt");
		std::cout << p1 << std::endl;
		PresidentialPardonForm p2(p1);
		std::cout << p2 << std::endl;
		PresidentialPardonForm p3("otro");
		std::cout << p3 << std::endl;
		p3 = p2;
		std::cout << p3 << std::endl;
	}
		
	Form			*form = NULL;
 	Bureaucrat		bob("bob", 1);
 	Bureaucrat		phil("phil", 40);
 	Bureaucrat		luc("luc", 150);
	std::cout << bob ;
	std::cout << phil ;
	std::cout << luc ;

	form = new ShrubberyCreationForm("HOME");
	{	std::cout << "\033[1;32m" << "------------- Execute without Sign ShrubberyCreationForm -----------------" << "\033[0m" << std::endl;
		std::cin.ignore();
		try
		{
			std::cout << "Execute Bob?" << " rank: " << bob.getGrade() << " vs form-rank:" << form->getGrade_To_Execute() << std::endl;
			form->execute(bob);
			std::cout << "Bob has execute the form" << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << "Bob could NOT execute the form because: " << e.what() << std::endl;
		}
		try
		{
			std::cout << "Execute Phil?" << " rank: " << phil.getGrade() << " vs form-rank:" << form->getGrade_To_Execute() << std::endl;
			std::cin.ignore();
			form->execute(phil);
			std::cout << "Phil has execute the form" << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << "Phil could NOT execute the form because: " << e.what() << std::endl;
		}
		try
		{
			std::cout << "Execute Luc?" << " rank: " << luc.getGrade() << " vs form-rank:" << form->getGrade_To_Execute() << std::endl;
			std::cin.ignore();
			form->execute(luc);
			std::cout << "Luc has execute the form" << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << "Luc could NOT execute the form because: " <<e.what() << std::endl;
		}
	}
	
	{	std::cout << "\033[1;32m" << "------------- Signing ShrubberyCreationForm -----------------" << "\033[0m" << std::endl;
		std::cin.ignore();
		try
		{
			std::cout << "Sign Bob?" << " rank: " << bob.getGrade() << " vs form-rank:" << form->getGrade_To_Signed() << std::endl;
			std::cin.ignore();
			form->beSigned(bob);
			std::cout << "Bob has signed" << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << "Bob has not signed because: " << e.what() << std::endl;
		}
		try
		{
			std::cout << "Sign Phil?" << " rank: " << phil.getGrade() << " vs form-rank:" << form->getGrade_To_Signed() << std::endl;
			std::cin.ignore();
			form->beSigned(phil);
			std::cout << "Phil has signed" << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << "Phil has not signed because: " << e.what() << std::endl;
		}
		try
		{
			std::cout << "Sign Luc?" << " rank: " << luc.getGrade() << " vs form-rank:" << form->getGrade_To_Signed() << std::endl;
			std::cin.ignore();
			form->beSigned(luc);
			std::cout << "Luc has signed" << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << "Luc has not signed because: " <<e.what() << std::endl;
		}
	}
	
	{	std::cout << "\033[1;32m" << "------------- Executing ShrubberyCreationForm -----------------" << "\033[0m" << std::endl;
		try
		{
			std::cout << "Execute Bob?" << " rank: " << bob.getGrade() << " vs form-rank:" << form->getGrade_To_Execute() << std::endl;
			std::cin.ignore();
			form->execute(bob);
			std::cout << "Bob has execute the form" << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << "Bob could NOT execute the form because: " << e.what() << std::endl;
		}
		try
		{
			std::cout << "Execute Phil?" << " rank: " << phil.getGrade() << " vs form-rank:" << form->getGrade_To_Execute() << std::endl;
			std::cin.ignore();
			form->execute(phil);
			std::cout << "Phil has execute the form" << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << "Phil could NOT execute the form because: " << e.what() << std::endl;
		}
		try
		{
			std::cout << "Execute Luc?" << " rank: " << luc.getGrade() << " vs form-rank:" << form->getGrade_To_Execute() << std::endl;
			std::cin.ignore();
			form->execute(luc);
			std::cout << "Luc has execute the form" << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << "Luc could NOT execute the form because: " <<e.what() << std::endl;
		}
	}
	
	delete form;
	
	form = new PresidentialPardonForm("PRISONER");
	{	std::cout << "\033[1;32m" << "------------- Execute without Sign PresidentialPardonForm -----------------" << "\033[0m" << std::endl;
		std::cin.ignore();
		try
		{
			std::cout << "Execute Bob?" << " rank: " << bob.getGrade() << " vs form-rank:" << form->getGrade_To_Execute() << std::endl;
			std::cin.ignore();
			form->execute(bob);
			std::cout << "Bob has execute the form" << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << "Bob could NOT execute the form because: " << e.what() << std::endl;
		}
		try
		{
			std::cout << "Execute Phil?" << " rank: " << phil.getGrade() << " vs form-rank:" << form->getGrade_To_Execute() << std::endl;
			std::cin.ignore();
			form->execute(phil);
			std::cout << "Phil has execute the form" << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << "Phil could NOT execute the form because: " << e.what() << std::endl;
		}
		try
		{
			std::cout << "Execute Luc?" << " rank: " << luc.getGrade() << " vs form-rank:" << form->getGrade_To_Execute() << std::endl;
			std::cin.ignore();
			form->execute(luc);
			std::cout << "Luc has execute the form" << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << "Luc could NOT execute the form because: " <<e.what() << std::endl;
		}
	}
	
	{	std::cout << "\033[1;32m" << "------------- Signing PresidentialPardonForm -----------------" << "\033[0m" << std::endl;
		try
		{
			std::cout << "Sign Bob?" << " rank: " << bob.getGrade() << " vs form-rank:" << form->getGrade_To_Signed() << std::endl;
			std::cin.ignore();
			form->beSigned(bob);
			std::cout << "Bob has signed" << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << "Bob has not signed because: " << e.what() << std::endl;
		}
		try
		{
			std::cout << "Sign Phil?" << " rank: " << phil.getGrade() << " vs form-rank:" << form->getGrade_To_Signed() << std::endl;
			std::cin.ignore();
			form->beSigned(phil);
			std::cout << "Phil has signed" << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << "Phil has not signed because: " << e.what() << std::endl;
		}
		try
		{
			std::cout << "Sign Luc?" << " rank: " << luc.getGrade() << " vs form-rank:" << form->getGrade_To_Signed() << std::endl;
			std::cin.ignore();
			form->beSigned(luc);
			std::cout << "Luc has signed" << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << "Luc has not signed because: " <<e.what() << std::endl;
		}
	}
	
	{	std::cout << "\033[1;32m" << "------------- Executing PresidentialPardonForm -----------------" << "\033[0m"<< std::endl;
		try
		{
			std::cout << "Execute Bob?" << " rank: " << bob.getGrade() << " vs form-rank:" << form->getGrade_To_Execute() << std::endl;
			std::cin.ignore();
			form->execute(bob);
			std::cout << "Bob has execute the form" << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << "Bob could NOT execute the form because: " << e.what() << std::endl;
		}
		try
		{
			std::cout << "Execute Phil?" << " rank: " << phil.getGrade() << " vs form-rank:" << form->getGrade_To_Execute() << std::endl;
			std::cin.ignore();
			form->execute(phil);
			std::cout << "Phil has execute the form" << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << "Phil could NOT execute the form because: " << e.what() << std::endl;
		}
		try
		{
			std::cout << "Execute Luc?" << " rank: " << luc.getGrade() << " vs form-rank:" << form->getGrade_To_Execute() << std::endl;
			std::cin.ignore();
			form->execute(luc);
			std::cout << "Luc has execute the form" << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << "Luc could NOT execute the form because: " <<e.what() << std::endl;
		}
	}
	
	delete form;

form = new RobotomyRequestForm("THOR");
	{	std::cout << "\033[1;32m" << "------------- Execute without Sign RobotomyRequestForm -----------------" << "\033[0m" << std::endl;
		try
		{
			std::cout << "Execute Bob?" << " rank: " << bob.getGrade() << " vs form-rank:" << form->getGrade_To_Execute() << std::endl;
			std::cin.ignore();
			form->execute(bob);
			std::cout << "Bob has execute the form" << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << "Bob could NOT execute the form because: " << e.what() << std::endl;
		}
		try
		{
			std::cout << "Execute Phil?" << " rank: " << phil.getGrade() << " vs form-rank:" << form->getGrade_To_Execute() << std::endl;
			std::cin.ignore();
			form->execute(phil);
			std::cout << "Phil has execute the form" << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << "Phil could NOT execute the form because: " << e.what() << std::endl;
		}
		try
		{
			std::cout << "Execute Luc?" << " rank: " << luc.getGrade() << " vs form-rank:" << form->getGrade_To_Execute() << std::endl;
			std::cin.ignore();
			form->execute(luc);
			std::cout << "Luc has execute the form" << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << "Luc could NOT execute the form because: " <<e.what() << std::endl;
		}
	}
	
	{	std::cout << "\033[1;32m" << "------------- Signing RobotomyRequestForm -----------------" << "\033[0m" << std::endl;
		try
		{
			std::cout << "Sign Bob?" << " rank: " << bob.getGrade() << " vs form-rank:" << form->getGrade_To_Signed() << std::endl;
			std::cin.ignore();
			form->beSigned(bob);
			std::cout << "Bob has signed" << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << "Bob has not signed because: " << e.what() << std::endl;
		}
		try
		{
			std::cout << "Sign Phil?" << " rank: " << phil.getGrade() << " vs form-rank:" << form->getGrade_To_Signed() << std::endl;
			std::cin.ignore();
			form->beSigned(phil);
			std::cout << "Phil has signed" << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << "Phil has not signed because: " << e.what() << std::endl;
		}
		try
		{
			std::cout << "Sign Luc?" << " rank: " << luc.getGrade() << " vs form-rank:" << form->getGrade_To_Signed() << std::endl;
			std::cin.ignore();
			form->beSigned(luc);
			std::cout << "Luc has signed" << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << "Luc has not signed because: " <<e.what() << std::endl;
		}
	}
	
	{	std::cout << "\033[1;32m" << "------------- Executing RobotomyRequestForm -----------------" << "\033[0m" << std::endl;
		try
		{
			std::cout << "Execute Bob?" << " rank: " << bob.getGrade() << " vs form-rank:" << form->getGrade_To_Execute() << std::endl;
			form->execute(bob);
			std::cout << "Bob has execute the form" << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << "Bob could NOT execute the form because: " << e.what() << std::endl;
		}
		try
		{
			std::cout << "Execute Phil?" << " rank: " << phil.getGrade() << " vs form-rank:" << form->getGrade_To_Execute() << std::endl;
			form->execute(phil);
			std::cout << "Phil has execute the form" << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << "Phil could NOT execute the form because: " << e.what() << std::endl;
		}
		try
		{
			std::cout << "Execute Luc?" << " rank: " << luc.getGrade() << " vs form-rank:" << form->getGrade_To_Execute() << std::endl;
			form->execute(luc);
			std::cout << "Luc has execute the form" << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << "Luc could NOT execute the form because: " <<e.what() << std::endl;
		}
	}
	
	delete form;

	std::cout << "\033[1;32m" << "----------------------bob.executeForm(*form); ShrubberyCreationForm-------------------------------" << "\033[0m" << std::endl;
	std::cin.ignore();
	form = new ShrubberyCreationForm("HOME");
	{	std::cout << "\033[1;32m" << "------------- Execute without Sign ShrubberyCreationForm -----------------" << "\033[0m" << std::endl;
		std::cin.ignore();
		try
		{
			std::cout << "Execute Bob?" << " rank: " << bob.getGrade() << " vs form-rank:" << form->getGrade_To_Execute() << std::endl;
			std::cin.ignore();
			bob.executeForm(*form);
			std::cout << "Bob has execute the form" << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << "Bob could NOT execute the form because: " << e.what() << std::endl;
		}
		try
		{
			std::cout << "Execute Phil?" << " rank: " << phil.getGrade() << " vs form-rank:" << form->getGrade_To_Execute() << std::endl;
			std::cin.ignore();
			phil.executeForm(*form);
			std::cout << "Phil has execute the form" << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << "Phil could NOT execute the form because: " << e.what() << std::endl;
		}
		try
		{
			std::cout << "Execute Luc?" << " rank: " << luc.getGrade() << " vs form-rank:" << form->getGrade_To_Execute() << std::endl;
			std::cin.ignore();
			luc.executeForm(*form);
			std::cout << "Luc has execute the form" << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << "Luc could NOT execute the form because: " <<e.what() << std::endl;
		}
	}
	
	{	std::cout << "\033[1;32m" << "------------- Signing ShrubberyCreationForm -----------------" << "\033[0m" << std::endl;
		std::cin.ignore();
		try
		{
			std::cout << "Sign Bob?" << " rank: " << bob.getGrade() << " vs form-rank:" << form->getGrade_To_Signed() << std::endl;
			std::cin.ignore();
			bob.signForm(*form);
			std::cout << "Bob has signed" << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << "Bob has not signed because: " << e.what() << std::endl;
		}
		try
		{
			std::cout << "Sign Phil?" << " rank: " << phil.getGrade() << " vs form-rank:" << form->getGrade_To_Signed() << std::endl;
			std::cin.ignore();
			phil.signForm(*form);
			std::cout << "Phil has signed" << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << "Phil has not signed because: " << e.what() << std::endl;
		}
		try
		{
			std::cout << "Sign Luc?" << " rank: " << luc.getGrade() << " vs form-rank:" << form->getGrade_To_Signed() << std::endl;
			std::cin.ignore();
			luc.signForm(*form);
			std::cout << "Luc has signed" << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << "Luc has not signed because: " <<e.what() << std::endl;
		}
	}
	
	{	std::cout << "\033[1;32m" << "------------- Executing ShrubberyCreationForm -----------------" << "\033[0m" << std::endl;
		try
		{
			std::cout << "Execute Bob?" << " rank: " << bob.getGrade() << " vs form-rank:" << form->getGrade_To_Execute() << std::endl;
			bob.executeForm(*form);
			std::cin.ignore();
			std::cout << "Bob has execute the form" << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << "Bob could NOT execute the form because: " << e.what() << std::endl;
		}
		try
		{
			std::cout << "Execute Phil?" << " rank: " << phil.getGrade() << " vs form-rank:" << form->getGrade_To_Execute() << std::endl;
			phil.executeForm(*form);
			std::cin.ignore();
			std::cout << "Phil has execute the form" << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << "Phil could NOT execute the form because: " << e.what() << std::endl;
		}
		try
		{
			std::cout << "Execute Luc?" << " rank: " << luc.getGrade() << " vs form-rank:" << form->getGrade_To_Execute() << std::endl;
			luc.executeForm(*form);
			std::cin.ignore();
			std::cout << "Luc has execute the form" << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << "Luc could NOT execute the form because: " <<e.what() << std::endl;
		}
	}
	
	delete form;


	std::cout << "\033[1;32m" << "----------------------bob.executeForm(*form); RobotomyRequestForm-------------------------------" << "\033[0m" << std::endl;
	std::cin.ignore();
	form = new RobotomyRequestForm("ROBOT");
	{	std::cout << "\033[1;32m"<< "------------- Execute without Sign RobotomyRequestForm -----------------" << "\033[0m" << std::endl;
		std::cin.ignore();
		try
		{
			std::cout << "Execute Bob?" << " rank: " << bob.getGrade() << " vs form-rank:" << form->getGrade_To_Execute() << std::endl;
			std::cin.ignore();
			bob.executeForm(*form);
			std::cout << "Bob has execute the form" << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << "Bob could NOT execute the form because: " << e.what() << std::endl;
		}
		try
		{
			std::cout << "Execute Phil?" << " rank: " << phil.getGrade() << " vs form-rank:" << form->getGrade_To_Execute() << std::endl;
			std::cin.ignore();
			phil.executeForm(*form);
			std::cout << "Phil has execute the form" << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << "Phil could NOT execute the form because: " << e.what() << std::endl;
		}
		try
		{
			std::cout << "Execute Luc?" << " rank: " << luc.getGrade() << " vs form-rank:" << form->getGrade_To_Execute() << std::endl;
			std::cin.ignore();
			luc.executeForm(*form);
			std::cout << "Luc has execute the form" << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << "Luc could NOT execute the form because: " <<e.what() << std::endl;
		}
	}
	
	{	std::cout << "------------- Signing RobotomyRequestForm -----------------" << "\033[0m" << std::endl;
		std::cin.ignore();
		try
		{
			std::cout << "Sign Bob?" << " rank: " << bob.getGrade() << " vs form-rank:" << form->getGrade_To_Signed() << std::endl;
			std::cin.ignore();
			bob.signForm(*form);
			std::cout << "Bob has signed" << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << "Bob has not signed because: " << e.what() << std::endl;
		}
		try
		{
			std::cout << "Sign Phil?" << " rank: " << phil.getGrade() << " vs form-rank:" << form->getGrade_To_Signed() << std::endl;
			std::cin.ignore();
			phil.signForm(*form);
			std::cout << "Phil has signed" << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << "Phil has not signed because: " << e.what() << std::endl;
		}
		try
		{
			std::cout << "Sign Luc?" << " rank: " << luc.getGrade() << " vs form-rank:" << form->getGrade_To_Signed() << std::endl;
			std::cin.ignore();
			luc.signForm(*form);
			std::cout << "Luc has signed" << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << "Luc has not signed because: " <<e.what() << std::endl;
		}
	}
	
	{	std::cout << "------------- Executing RobotomyRequestForm -----------------" << "\033[0m" << std::endl;
		try
		{
			std::cout << "Execute Bob?" << " rank: " << bob.getGrade() << " vs form-rank:" << form->getGrade_To_Execute() << std::endl;
			bob.executeForm(*form);
			std::cin.ignore();
			std::cout << "Bob has execute the form" << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << "Bob could NOT execute the form because: " << e.what() << std::endl;
		}
		try
		{
			std::cout << "Execute Phil?" << " rank: " << phil.getGrade() << " vs form-rank:" << form->getGrade_To_Execute() << std::endl;
			phil.executeForm(*form);
			std::cin.ignore();
			std::cout << "Phil has execute the form" << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << "Phil could NOT execute the form because: " << e.what() << std::endl;
		}
		try
		{
			std::cout << "Execute Luc?" << " rank: " << luc.getGrade() << " vs form-rank:" << form->getGrade_To_Execute() << std::endl;
			luc.executeForm(*form);
			std::cin.ignore();
			std::cout << "Luc has execute the form" << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << "Luc could NOT execute the form because: " <<e.what() << std::endl;
		}
	}
	
	delete form;

		std::cout << "\033[1;32m" << "----------------------bob.executeForm(*form); PresidentialPardonForm-------------------------------" << "\033[0m"<< std::endl;
	std::cin.ignore();
	form = new PresidentialPardonForm("PRESIDENTIAL");
	{	std::cout << "\033[1;32m" << "------------- Execute without Sign PresidentialPardonForm -----------------" << "\033[0m" << std::endl;
		std::cin.ignore();
		try
		{
			std::cout << "Execute Bob?" << " rank: " << bob.getGrade() << " vs form-rank:" << form->getGrade_To_Execute() << std::endl;
			std::cin.ignore();
			bob.executeForm(*form);
			std::cout << "Bob has execute the form" << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << "Bob could NOT execute the form because: " << e.what() << std::endl;
		}
		try
		{
			std::cout << "Execute Phil?" << " rank: " << phil.getGrade() << " vs form-rank:" << form->getGrade_To_Execute() << std::endl;
			std::cin.ignore();
			phil.executeForm(*form);
			std::cout << "Phil has execute the form" << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << "Phil could NOT execute the form because: " << e.what() << std::endl;
		}
		try
		{
			std::cout << "Execute Luc?" << " rank: " << luc.getGrade() << " vs form-rank:" << form->getGrade_To_Execute() << std::endl;
			std::cin.ignore();
			luc.executeForm(*form);
			std::cout << "Luc has execute the form" << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << "Luc could NOT execute the form because: " <<e.what() << std::endl;
		}
	}
	
	{	std::cout << "\033[1;32m" << "------------- Signing PresidentialPardonForm -----------------" << "\033[0m" << std::endl;
		std::cin.ignore();
		try
		{
			std::cout << "Sign Bob?" << " rank: " << bob.getGrade() << " vs form-rank:" << form->getGrade_To_Signed() << std::endl;
			std::cin.ignore();
			bob.signForm(*form);
			std::cout << "Bob has signed" << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << "Bob has not signed because: " << e.what() << std::endl;
		}
		try
		{
			std::cout << "Sign Phil?" << " rank: " << phil.getGrade() << " vs form-rank:" << form->getGrade_To_Signed() << std::endl;
			std::cin.ignore();
			phil.signForm(*form);
			std::cout << "Phil has signed" << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << "Phil has not signed because: " << e.what() << std::endl;
		}
		try
		{
			std::cout << "Sign Luc?" << " rank: " << luc.getGrade() << " vs form-rank:" << form->getGrade_To_Signed() << std::endl;
			std::cin.ignore();
			luc.signForm(*form);
			std::cout << "Luc has signed" << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << "Luc has not signed because: " <<e.what() << std::endl;
		}
	}
	
	{	std::cout << "\033[1;32m" << "------------- Executing PresidentialPardonForm -----------------" << "\033[0m"  << std::endl;
		try
		{
			std::cout << "Execute Bob?" << " rank: " << bob.getGrade() << " vs form-rank:" << form->getGrade_To_Execute() << std::endl;
			bob.executeForm(*form);
			std::cin.ignore();
			std::cout << "Bob has execute the form" << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << "Bob could NOT execute the form because: " << e.what() << std::endl;
		}
		try
		{
			std::cout << "Execute Phil?" << " rank: " << phil.getGrade() << " vs form-rank:" << form->getGrade_To_Execute() << std::endl;
			phil.executeForm(*form);
			std::cin.ignore();
			std::cout << "Phil has execute the form" << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << "Phil could NOT execute the form because: " << e.what() << std::endl;
		}
		try
		{
			std::cout << "Execute Luc?" << " rank: " << luc.getGrade() << " vs form-rank:" << form->getGrade_To_Execute() << std::endl;
			luc.executeForm(*form);
			std::cin.ignore();
			std::cout << "Luc has execute the form" << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << "Luc could NOT execute the form because: " <<e.what() << std::endl;
		}
	}
	
	delete form;

	return (0);
}