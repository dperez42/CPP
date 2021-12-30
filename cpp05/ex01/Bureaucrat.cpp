/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dperez-z <dperez-z@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 16:51:07 by dperez-z          #+#    #+#             */
/*   Updated: 2021/12/21 18:40:38 by dperez-z         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string const name, int grade): _name(name), _grade(grade)
{
    this->_checkGrade(grade);
    return;
};

Bureaucrat::Bureaucrat(Bureaucrat const &instance): _name(instance._name), _grade(instance._grade)
{
    *this = instance;
};

Bureaucrat::~Bureaucrat(void)
{
    return;
};

//operators 
Bureaucrat &Bureaucrat::operator=(Bureaucrat const &instance)
{
    this->_grade = instance._grade;
    return(*this);
};

//getters
std::string const Bureaucrat::getName() const
{
    return(this->_name);
};

int Bureaucrat::getGrade() const
{
    return(this->_grade);
};

void Bureaucrat::_checkGrade(int grade)
{
    if (grade <= 0)
        throw (GradeTooHighException());
    if (grade > 150)
        throw (GradeTooLowException());
    return;
};

void Bureaucrat::incrementGrade()
{
	_checkGrade(_grade - 1);
	_grade--;
}

void Bureaucrat::decrementGrade()
{
	_checkGrade(_grade + 1);
	_grade++;
}

Bureaucrat::GradeTooHighException::GradeTooHighException()
{
}

const char* Bureaucrat::GradeTooHighException::what(void) const _NOEXCEPT
{
	return ("Bureaucrat's grade is too high.");
}

Bureaucrat::GradeTooLowException::GradeTooLowException()
{
}

const char* Bureaucrat::GradeTooLowException::what(void) const _NOEXCEPT
{
	return ("Bureaucrat's grade is too low.");
}

std::ostream & operator << (std::ostream & os, Bureaucrat const & element)
{
	os << element.getName() << ", bureaucrat grade "
		<< element.getGrade() << "." << std::endl;
	return (os);
}

void Bureaucrat::signForm(Form &form)
{
    try 
    {
        form.beSigned(*this);
        std::cout << this->_name << " signs " << form.getName() << std::endl ;
    }
    catch (std::exception const & e)
    {
        std::cout << this->_name << " cannot signs " << form.getName() << " because " << e.what() <<std::endl ;
    }
};