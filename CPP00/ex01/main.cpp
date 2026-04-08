/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-ghaz <ael-ghaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 16:57:10 by eganas            #+#    #+#             */
/*   Updated: 2026/04/08 13:42:46 by ael-ghaz         ###   ########.fr       */
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
		std::cout << std::endl << "Choose your command: \'ADD\', \'SEARCH\' or \'EXIT\'" << std::endl;
        std::getline(std::cin, str);
        if (str == "ADD")
        {
            std::cout << std::endl << str << " A CONTACT INFORMATIONS" << std::endl;
			std::cout << "------------------------------" << std::endl;
            PhoneBook.addContact();
            std::cout << "CONTACT ADDED" << std::endl;
        }
        else if (str == "SEARCH")
        {
            std::cout << std::endl << str << " A CONTACT" << std::endl;
			std::cout << "------------------------------" << std::endl;
            PhoneBook.searchContact();
			continue;
        }
        else if (str == "EXIT")
        {
            std::cout << std::endl << str << " THE PHONEBOOK" << std::endl;
            break;
        }
		else
			std::cout << "Usage: Write \'ADD\', \'SEARCH\' or \'EXIT\'" << std::endl;
    }
    return (1);
}
