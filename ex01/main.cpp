/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcharrad <mcharrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 12:26:29 by mcharrad          #+#    #+#             */
/*   Updated: 2023/07/09 09:15:29 by mcharrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <list>
#include <vector>
#include <cstdlib>
#include "Span.hpp"

int main()
{
    {
        Span sp = Span(5);
        sp.addNumber(6);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
    }
    {
        Span sp = Span(5);
        sp.addNumber(6);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);
        try
        {
            sp.addNumber(69);
        }
        catch (std::exception &e)
        {
            std::cout << e.what() << std::endl;
        }
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
    }
    {
        Span sp = Span(5);
        std::list<int> lst;
        lst.push_back(6);
        lst.push_back(3);
        lst.push_back(17);
        lst.push_back(9);
        lst.push_back(11);
        lst.push_back(69);
        try {
            sp.addRange(lst.begin(), lst.end());
        }
        catch (std::exception &e)
        {
            std::cout << e.what() << std::endl;
        }
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
    }
    {
        Span sp = Span(5);
        std::list<int> lst;
        lst.push_back(6);
        lst.push_back(3);
        lst.push_back(17);
        lst.push_back(9);
        lst.push_back(11);
        sp.addRange(lst.begin(), lst.end());
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
    }
    {
        Span sp = Span(10);
        std::vector<int> vec;
        vec.push_back(6);
        vec.push_back(3);
        vec.push_back(17);
        vec.push_back(9);
        vec.push_back(11);
        const std::vector<int>::iterator beg = vec.begin();
        const std::vector<int>::iterator end = vec.end();
        std::cout << "distance: " << std::distance(beg, end) << std::endl;
        std::cout << "size: " << vec.size() << std::endl;
        sp.addRange(vec.begin(), vec.end());
        sp.addRange(beg, end);
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
    }
    {
        Span sp = Span(10000);
        srand(time(NULL));
        for (int i = 0; i < 10000; i++)
            sp.addNumber(rand());
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
    }
    {
        Span sp = Span(0);
        try
        {
            sp.addNumber(69);
        }
        catch (std::exception &e)
        {
            std::cout << e.what() << std::endl;
        }
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
    }
    return 0;
}