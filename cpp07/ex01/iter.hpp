/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dperez-z <dperez-z@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 18:07:39 by dperez-z          #+#    #+#             */
/*   Updated: 2022/01/12 18:07:40 by dperez-z         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template < typename T>
void iter(T *array, int arraysize, void (*function)(T &))
{
    int i = 0;
    while (i < arraysize)
    {
        function(array[i]);
        i++;
    }
    return;
}
