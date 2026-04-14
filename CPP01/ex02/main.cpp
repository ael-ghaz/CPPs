/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eganas <eganas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/05 12:38:20 by eganas            #+#    #+#             */
/*   Updated: 2026/04/14 12:08:50 by eganas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
    std::string str = "HI THIS IS BRAIN";
    std::string* stringPTR = &str;
    std::string& stringREF = str;

    std::cout << "Memory Adress str:		" << &str << std::endl;
    std::cout << "Memory Adress stringPTR:	" << stringPTR << std::endl;
    std::cout << "Memory Adress stringREF:	" << &stringREF << std::endl;
    
    std::cout << "Value of str:			" << str << std::endl;
    std::cout << "Value of stringPTR:		" << *stringPTR << std::endl;
    std::cout << "Value of stringREF:		" << stringREF << std::endl;
    return (0);
}
