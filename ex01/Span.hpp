/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcharrad <mcharrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 12:08:14 by mcharrad          #+#    #+#             */
/*   Updated: 2023/07/09 09:13:15 by mcharrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <list>
#include <iostream>
#include <algorithm>

class Span
{
private:
    unsigned int size;
    std::list<int> arr;

public:
    Span();
    ~Span();
    Span(const Span &copy);
    Span &operator=(const Span &copy);
    Span(unsigned int size);
    void addNumber(int number);
    long shortestSpan() const;
    long longestSpan() const;
    template <typename Iter> void addRange(const Iter & first, const Iter & last)
    {
        long dist = std::distance(first, last);
        if (arr.size() + dist > size)
            throw std::exception();
        arr.insert(arr.end(), first, last);
    }
};
