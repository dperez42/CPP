/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel <daniel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/01 12:24:44 by daniel            #+#    #+#             */
/*   Updated: 2022/01/01 12:25:30 by daniel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

# ifndef WHATEVER_HPP
# define WHATEVER_HPP

template < typename T>
T max(T x, T y)
{
    if (x == y)
        return y;
    if (x > y)
        return x;
    return (y);
}

template < typename T>
T min(T x, T y)
{
    if (x == y)
        return y;
    if (x > y)
        return y;
    return (x);
}

template < typename T>
void swap(T &x, T &y)
{
    T z = x;
    x = y;
    y = z;
    return;
}
#endif