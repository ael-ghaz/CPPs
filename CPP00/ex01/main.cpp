/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eganas <eganas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 16:57:10 by eganas            #+#    #+#             */
/*   Updated: 2026/04/01 20:17:14 by eganas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main()
{
    std::string str;

    while (1)
    {
        std::cin >> str;
        if (str == "ADD")
            std::cout << str << " A CONTACT" << std::endl;
        if (str == "SEARCH")
            std::cout << str << " A CONTACT" << std::endl;
        if (str == "EXIT")
        {
            std::cout << str << " THE PHONEBOOK" << std::endl;
            break;
        }
    }
    return (1);
}
