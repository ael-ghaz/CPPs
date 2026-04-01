/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eganas <eganas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/31 14:24:26 by eganas            #+#    #+#             */
/*   Updated: 2026/04/01 18:19:34 by eganas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact() {}
Contact::~Contact() {}

std::string Contact::getName()
{
    return this->name;
}

std::string Contact::getNickName()
{
    return this->nickname;
}

std::string Contact::getPhNumber()
{
    return this->phnumber;
}

std::string Contact::getSecret()
{
    return this->secret;
}

void Contact::setName(std::string name)
{
    this->name = name;
}

void Contact::setNickName(std::string nickname)
{
    this->nickname = nickname;
}

void Contact::setPhNumber(std::string phnumber)
{
    this->phnumber = phnumber;
}

void Contact::setSecret(std::string secret)
{
    this->secret = secret;
}
