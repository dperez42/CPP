/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dperez-z <dperez-z@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 16:52:42 by dperez-z          #+#    #+#             */
/*   Updated: 2021/12/28 09:44:25 by dperez-z         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target): _target(target), Form("RobotomyRequestForm",72,45)
{ return; };

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &instance): _target(instance._target), Form("RobotomyRequestForm",72,45)
{
    *this = instance;
}

RobotomyRequestForm::~RobotomyRequestForm()
{};

//operators

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &instance)
{
    this->_target = instance._target;
    return(*this);
};

//getters
std::string const RobotomyRequestForm::getTarget() const
{ return (this->_target);};

void	RobotomyRequestForm::execute( const Bureaucrat &executor ) const
 {
        checkisSigned();
        checkExecutability(executor);
        std::cout << "\033[1;33m" << "* Unbearable drilling noises *" << std::endl;
        std::cout << "The victim:" << this->_target << " has been robotomized successfully 50% of the time. " << "\033[0m"<< std::endl;
 }



