/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eganas <eganas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/31 14:23:34 by eganas            #+#    #+#             */
/*   Updated: 2026/04/02 05:23:46 by eganas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iomanip>

PhoneBook::PhoneBook() : nbcontacts(0), cindex(0) {}
PhoneBook::~PhoneBook() {}

void PhoneBook::addContact()
{
    std::string firstname;
    std::string lastname;
    std::string nickname;
    std::string phnumber;
    std::string secret;

    std::cout << "FirstName: " << std::endl;
    std::getline(std::cin, firstname);
    std::cout << "LastName: " << std::endl;
    std::getline(std::cin, lastname);
    std::cout << "NickName: " << std::endl;
    std::getline(std::cin, nickname);
    std::cout << "PhoneNumber: " << std::endl;
    std::getline(std::cin, phnumber);
    std::cout << "Dark Secret: " << std::endl;
    std::getline(std::cin, secret);
    if (firstname.empty() || lastname.empty() || nickname.empty() || phnumber.empty() || secret.empty())
        return;
    if (this->cindex == 8)
        this->cindex = 0;
    this->array[this->cindex].setFirstName(firstname);
    this->array[this->cindex].setLastName(lastname);
    this->array[this->cindex].setNickName(nickname);
    this->array[this->cindex].setPhNumber(phnumber);
    this->array[this->cindex].setSecret(secret);
    this->cindex++;
    if (this->nbcontacts < 8)
        this->nbcontacts++;
}

std::string PhoneBook::getContactFormat(std::string str)
{
    if (str.length() > 10)
        return (str.substr(0, 9) + ".");
    return str;
}

void PhoneBook::displayContacts()
{
    std::cout << "_____________________________________________" << std::endl;
    std::cout << "|" << std::setw(10) << "INDEX"
                << "|" << std::setw(10) << "FIRSTNAME"
                << "|" << std::setw(10) << "LASTNAME"
                << "|" << std::setw(10) << "NICKNAME" 
                << "|" << std::endl;
    for (int i = 0; i < this->nbcontacts; i++)
    {
        std::cout << "_____________________________________________" << std::endl;
        std::cout << "|" << std::setw(10) << i 
                    << "|" << std::setw(10) << getContactFormat(this->array[i].getFirstName())
                    << "|" << std::setw(10) << getContactFormat(this->array[i].getLastName())
                    << "|" << std::setw(10) << getContactFormat(this->array[i].getNickName())
                    << "|" << std::endl;
    }
    std::cout << "_____________________________________________" << std::endl;
}

void PhoneBook::searchContact()
{
    int index = -1;
    this->displayContacts();
    if (this->nbcontacts == 0)
    {
        std::cout << "NO CONTACTS THERE" << std::endl;
        return;
    }
    std::cout << "CHOOSE AN INDEX: " << std::endl;
    while (1)
    {
        std::cin >> index;
        if (std::cin.fail())
        {
            std::cin.clear();
            std::cin.ignore(10000, '\n'); 
            std::cout << "ERROR : PLEASE CHOOSE AN INTEGER" << std::endl;
            continue;
        }
        if (index >= 0 && index < this->nbcontacts)
            break;
        std::cout << "ERROR: PLEASE CHOOSE AN INTEGER BETWEEN 0 AND " << this->nbcontacts - 1 << std::endl;
    }
    std::cout << "FirstName: " << this->array[index].getFirstName() << std::endl;
    std::cout << "LastName: " << this->array[index].getLastName() << std::endl;
    std::cout << "NickName: " << this->array[index].getNickName() << std::endl;
    std::cout << "PhoneNumber: " << this->array[index].getPhNumber() << std::endl;
    std::cout << "Dark Secret: " << this->array[index].getSecret() << std::endl;
}
