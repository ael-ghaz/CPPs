/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eganas <eganas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/05 12:38:20 by eganas            #+#    #+#             */
/*   Updated: 2026/04/05 14:24:21 by eganas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    int n = 10;
    Zombie* zombies = zombieHorde(n, "Runners");

    for (int i; i < n; i++)
    {
        std::cout << i + 1 << ": ";
        zombies[i].announce();
    }

    delete [] zombies;
    return (0);
}
