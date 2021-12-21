/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dperez-z <dperez-z@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 12:27:21 by dperez-z          #+#    #+#             */
/*   Updated: 2021/12/10 12:27:22 by dperez-z         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain
{
    protected:
        std::string ideas[100];    
    
    public:
        Brain(void);
        Brain(Brain const &instance);
        ~Brain();
      //operator 
        Brain &operator=(Brain const &instance);
        void saveIdea(std::string idea, int nb);
        std::string getIdea(int nb);
};

#endif