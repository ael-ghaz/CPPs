/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eganas <eganas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/31 14:24:23 by eganas            #+#    #+#             */
/*   Updated: 2026/04/01 21:52:26 by eganas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <string>

class Contact
{
private:
    std::string firstname;
    std::string lastname;
    std::string nickname;
    std::string phnumber;
    std::string secret;

public:
    Contact();
    ~Contact();

    std::string getFirstName();
    std::string getLastName();
    std::string getNickName();
    std::string getPhNumber();
    std::string getSecret();
    void setFirstName(std::string firstname);
    void setLastName(std::string lastname);
    void setNickName(std::string nickname);
    void setPhNumber(std::string phnumber);
    void setSecret(std::string secret);
};

#endif