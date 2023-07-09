/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcharrad <mcharrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 12:13:03 by mcharrad          #+#    #+#             */
/*   Updated: 2023/07/09 09:15:38 by mcharrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <cmath>
#include <limits>

Span::Span() : size(0) {}

Span::~Span() {}

Span::Span(const Span & copy)
{
    *this = copy;
}

Span & Span::operator=(const Span & copy)
{
    if (this != &copy)
    {
        arr = copy.arr;
        size = copy.size;
    }
    return *this;
}

Span::Span(unsigned int size) : size(size) {}

void Span::addNumber(int number)
{
    if (arr.size() < size)
    {
        arr.push_back(number);
    }
    else
        throw std::exception();
}

long Span::longestSpan() const
{
    std::list<int> sortedArr(arr);
    sortedArr.sort();
    return std::abs(static_cast<long>(*sortedArr.rbegin()) - *sortedArr.begin());
}

long Span::shortestSpan() const
{
    std::list<int> sortedArr(arr);
    sortedArr.sort();
    long span = arr.size() > 1 ? std::numeric_limits<long>::max() : 0;

    for (std::list<int>::iterator i = sortedArr.begin(); i != sortedArr.end();)
    {
        int current = *i;
        i++;
        if (i != sortedArr.end())
        {
            int next = *i;
            long diff = std::abs(static_cast<long>(next) - current);
            if (span > diff)
                span = diff;
        }

    }
    return span;
}
