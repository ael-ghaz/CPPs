/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eganas <eganas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 16:57:10 by eganas            #+#    #+#             */
/*   Updated: 2026/04/02 04:53:04 by eganas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "PhoneBook.hpp"

int main()
{
    PhoneBook PhoneBook;
    std::string str;

    while (1)
    {
        std::getline(std::cin, str);
        if (str == "ADD")
        {
            std::cout << str << " A CONTACT" << std::endl;
            PhoneBook.addContact();
            std::cout << "CONTACT ADDED" << std::endl;
        }
        if (str == "SEARCH")
        {
            std::cout << str << " A CONTACT" << std::endl;
            PhoneBook.searchContact();
        }
        if (str == "EXIT")
        {
            std::cout << str << " THE PHONEBOOK" << std::endl;
            break;
        }
    }
    return (1);
}
