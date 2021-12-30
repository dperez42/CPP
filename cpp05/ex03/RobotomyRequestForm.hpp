/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dperez-z <dperez-z@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 16:52:48 by dperez-z          #+#    #+#             */
/*   Updated: 2021/12/21 18:19:48 by dperez-z         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include <iostream>
# include <string>
# include <exception>
# include "Bureaucrat.hpp"
# include "Form.hpp"

class RobotomyRequestForm: public Form
{
    private:
        std::string _target;
        RobotomyRequestForm();
    public:
        RobotomyRequestForm(std::string target);
        RobotomyRequestForm(RobotomyRequestForm const &instance);
        virtual ~RobotomyRequestForm(void);
        //Operator
        RobotomyRequestForm &operator=(RobotomyRequestForm const &instance);

        std::string const getTarget(void) const;
        //Functions
        virtual void execute(Bureaucrat const & executor) const;
};
# endif