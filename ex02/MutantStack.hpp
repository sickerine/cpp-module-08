/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcharrad <mcharrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 09:17:14 by mcharrad          #+#    #+#             */
/*   Updated: 2023/07/09 10:31:28 by mcharrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <stack>

template <typename T>
class MutantStack : public std::stack<T>
{
public:
    typedef typename std::stack<T> bad;
    typedef typename bad::container_type::iterator iterator;
    MutantStack() : bad(){};
    ~MutantStack(){};
    MutantStack(const MutantStack &copy) : bad(copy)
    {
        *this = copy;
    };
    MutantStack &operator=(const MutantStack &copy)
    {
        bad::operator=(copy);
        return *this;
    };
    iterator begin()
    {
        return bad::c.begin();
    }
    iterator end()
    {
        return bad::c.end();
    }
};
