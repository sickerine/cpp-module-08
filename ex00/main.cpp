/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcharrad <mcharrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 10:58:45 by mcharrad          #+#    #+#             */
/*   Updated: 2023/07/08 11:19:57 by mcharrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <string>
#include <vector>
#include <iostream>
#include <list>

int main()
{
    {
        std::vector<int> vec;
        vec.push_back(1);
        vec.push_back(2);
        vec.push_back(3);

        std::vector<int>::iterator it = easyfind(vec, 3);
        std::cout << *(it-1) << std::endl;
        std::cout << *it << std::endl;
        std::cout << *(it+1) << std::endl;

        try {
            easyfind(vec, 6);
        }
        catch (std::exception &e)
        {
            std::cout << e.what() << std::endl;
        }
    }

    {
        std::list<int> lst;
        lst.push_back(1);
        lst.push_back(5);
        lst.push_back(98);
        lst.push_back(3);
        lst.push_back(6);
        lst.sort();

        std::list<int>::iterator it1 = easyfind(lst, 5);
        it1++;
        std::list<int>::iterator it2 = it1;
        it1++;
        std::list<int>::iterator it3 = it1;
        it1--;
        it1--;
        std::cout << *it1 << std::endl;
        std::cout << *it2 << std::endl;
        std::cout << *it3 << std::endl;

        try {
            easyfind(lst, 69);
        }
        catch (std::exception &e)
        {
            std::cout << e.what() << std::endl;
        }
    }

}