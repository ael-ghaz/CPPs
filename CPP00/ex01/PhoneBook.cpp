/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eganas <eganas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/31 14:23:34 by eganas            #+#    #+#             */
/*   Updated: 2026/04/01 20:07:07 by eganas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook() : nbcontacts(0) {}
PhoneBook::~PhoneBook() {}

void PhoneBook::addContact()
{
    std::string name;
    std::string nickname;
    std::string phnumber;
    std::string secret;

    std::cin >> name;
    std::cin >> nickname;
    std::cin >> phnumber;
    std::cin >> secret;

    if (name.empty() || nickname.empty() || phnumber.empty() || secret.empty())
        return;

    if (this->nbcontacts == 8)
        this->nbcontacts = 0;
    this->array[this->nbcontacts].setName(name);
    this->array[this->nbcontacts].setNickName(nickname);
    this->array[this->nbcontacts].setPhNumber(phnumber);
    this->array[this->nbcontacts].setSecret(secret);
    this->nbcontacts++;
}

void PhoneBook::searchContact()
{

}