/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eganas <eganas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 16:01:20 by eganas            #+#    #+#             */
/*   Updated: 2025/11/13 16:58:06 by eganas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>

int main(int argc, char **argv)
{
    if (argc == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    if (argc > 1)
    {
        for (int j = 1; j < argc; j++)
        {
            for (size_t i = 0; i < strlen(argv[j]); i++)
                std::cout << (char) toupper(argv[j][i]);
        }
    }
    std::cout << std::endl;
    return (1);
}
