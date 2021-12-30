/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dperez-z <dperez-z@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 16:51:40 by dperez-z          #+#    #+#             */
/*   Updated: 2021/12/28 09:10:43 by dperez-z         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(std::string name, int grade_to_signed, int grade_to_execute): _name(name), _grade_to_signed(grade_to_signed), _grade_to_execute(grade_to_execute), _signed(false)
{
    _checkGrade(grade_to_signed);
    _checkGrade(grade_to_execute);
    return;
};

Form::Form(Form const &instance): _name(instance._name), _grade_to_signed(instance._grade_to_signed), _grade_to_execute(instance._grade_to_execute), _signed(instance._signed)
{ *this = instance;
}
Form::~Form()
{};

//operators
Form &Form::operator=(Form const &instance)
{
    this->_signed = instance._signed;
    return(*this);
};
//getters
std::string const Form::getName() const
{ return (this->_name);};

int Form::getGrade_To_Signed() const
{ return (this->_grade_to_signed);};

int Form::getGrade_To_Execute() const
{ return (this->_grade_to_execute);};

bool Form::IsSigned() const
{ return (this->_signed);};

void Form::_checkGrade(int grade)
{
    if (grade <= 0)
        throw (GradeTooHighException());
    if (grade > 150)
        throw (GradeTooLowException());
    return;
};

Form::GradeTooHighException::GradeTooHighException()
{
}

const char* Form::GradeTooHighException::what(void) const _NOEXCEPT
{
	return ("Form's grade is too high.");
}

Form::GradeTooLowException::GradeTooLowException()
{
}

const char* Form::GradeTooLowException::what(void) const _NOEXCEPT
{
	return ("Form's grade is too low.");
}

void Form::beSigned(Bureaucrat const &agent)
{
    int grade_agent;
    int grade_form;
    grade_agent = agent.getGrade();
    grade_form = this->_grade_to_signed;
    if (grade_form < grade_agent)
        throw GradeTooHighException();
    this->_signed = true; 
}

Form::CantExecuteFormException::CantExecuteFormException()
{
}

const char* Form::CantExecuteFormException::what(void) const _NOEXCEPT
{
	return ("The executor has a rank too low");
}

Form::CantExecuteNotSignedException::CantExecuteNotSignedException()
{
}

const char* Form::CantExecuteNotSignedException::what(void) const _NOEXCEPT
{
	return ("The form is not signed");
}

std::ostream & operator << (std::ostream & os, Form const & element)
{
	os << element.getName() << ", grade to signed: "
		<< element.getGrade_To_Signed() << ",  grade to execute: "
        << element.getGrade_To_Execute() << ", signed:" 
        << element.IsSigned()
        << std::endl;
	return (os);
}