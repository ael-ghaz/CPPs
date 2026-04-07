/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eganas <eganas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/07 13:15:36 by eganas            #+#    #+#             */
/*   Updated: 2026/04/07 14:34:24 by eganas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>
#include <iomanip>

class Harl
{
public:
    Harl();
    ~Harl();
    
    void complain( std::string level );

private:
    void debug (void) const;
    void info (void) const;
    void warning (void) const;
    void error (void) const;
};

#endif