/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dperez-z <dperez-z@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 10:40:47 by daniel            #+#    #+#             */
/*   Updated: 2021/12/28 10:26:32 by dperez-z         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
 Intern::Intern( void )
 {
 	return;
 }
 
 Intern::Intern( Intern const & src )
 {
 	*this = src;
 	return;
 }
 
 Intern::~Intern( void )
 {
 	return;
 }
 
 Intern &	Intern::operator=( Intern const & rhs )
 {
 	(void)rhs;
 	return *this;
 }
 
 Form	*Intern::makeForm(const std::string &formName, const std::string &target) const
 {
 	t_formList forms[] = 
 	{
 		{ "presidential pardon", new PresidentialPardonForm(target) },
 		{ "robotomy request", new RobotomyRequestForm(target) },
 		{ "shrubbery creation", new ShrubberyCreationForm(target) },
 		{ "", NULL }
 	};
 	Form	*resultForm = NULL;
 
 	for (int i = 0; forms[i].formType != NULL; i++)
 	{
 		if (forms[i].formName == formName)
 			resultForm = forms[i].formType;
 		else
 			delete forms[i].formType;
 	}
	if (resultForm == NULL)
        throw (NotExitsFormException());
 	std::cout << "Intern creates " << formName << std::endl;
 	return resultForm;
 }

Intern::NotExitsFormException::NotExitsFormException()
{
}

const char* Intern::NotExitsFormException::what(void) const _NOEXCEPT
{
	return ("Intern did not find the form.");
}
 
 std::ostream &	operator<<( std::ostream & ostr, Intern const & instance)
 {
 	(void)instance;
 	ostr << "Intern" << std::endl;
 	return ostr;
 }