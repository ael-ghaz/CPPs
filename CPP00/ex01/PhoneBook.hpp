/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eganas <eganas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/31 14:24:18 by eganas            #+#    #+#             */
/*   Updated: 2026/04/02 04:04:05 by eganas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"
#include <iostream>

class PhoneBook
{
private:
    Contact array[8];
    int     nbcontacts;
    int     cindex;

public:
    PhoneBook();
    ~PhoneBook();

    void addContact();
    void searchContact();
    void displayContacts();
    std::string getContactFormat(std::string str);
};

#endif