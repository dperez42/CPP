/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dperez-z <dperez-z@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 16:19:48 by dperez-z          #+#    #+#             */
/*   Updated: 2022/01/20 18:03:32 by dperez-z         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <algorithm>
#include <vector>

template <class T>
void	easyfind(T &t, int n)
{
	if (std::find(t.begin(), t.end(), n) != t.end())
		std::cout << "Number " << n << " found" << std::endl;
	else
		throw 1;
}