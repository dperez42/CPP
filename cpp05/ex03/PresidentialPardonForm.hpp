/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dperez-z <dperez-z@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 16:52:36 by dperez-z          #+#    #+#             */
/*   Updated: 2021/12/21 18:19:37 by dperez-z         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include <iostream>
# include <string>
# include <exception>
# include "Bureaucrat.hpp"
# include "Form.hpp"

class PresidentialPardonForm: public Form
{
    private:
        std::string _target;
        PresidentialPardonForm();
    public:
        PresidentialPardonForm(std::string target);
        PresidentialPardonForm(PresidentialPardonForm const &instance);
        virtual ~PresidentialPardonForm(void);
        //Operator
        PresidentialPardonForm &operator=(PresidentialPardonForm const &instance);

        std::string const getTarget(void) const;
        //Functions
        virtual void execute(Bureaucrat const & executor) const;
};
# endif