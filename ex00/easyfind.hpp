/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcharrad <mcharrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 10:49:52 by mcharrad          #+#    #+#             */
/*   Updated: 2023/07/09 08:38:57 by mcharrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <algorithm>

template <typename T>
typename T::iterator easyfind(T &idk, int sec)
{
    typename T::iterator ret = std::find(idk.begin(), idk.end(), sec);
    if (ret != idk.end())
        return ret;
    else
        throw std::exception();
}