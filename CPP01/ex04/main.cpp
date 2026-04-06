/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eganas <eganas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/05 12:38:20 by eganas            #+#    #+#             */
/*   Updated: 2026/04/06 20:11:32 by eganas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

void replace(std::string &line, std::string occ1, std::string occ2)
{
    size_t i = 0;

    while (true)
    {
        i = line.find(occ1);
        if (i == std::string::npos)
            break;
        line = line.substr(0, i) + occ2 + line.substr(i + occ1.length(), std::string::npos);
    }
}

int main(int argc, char **argv)
{
    if (argc != 4)
        return (std::cout << "Usage: ./replace filename occ1 occ2" << std::endl, 1);
    std::string input = argv[1];
    std::string occ1 = argv[2];
    std::string occ2 = argv[3];
    std::string output = input + ".replace";
    
    std::ifstream ifs(input.c_str());
    if (ifs.fail())
        return (std::cout << "Error: Infile can't be opened" << std::endl, 1);
    else
        std::cout << "File \"" + input + "\" has been opened" << std::endl; 
    std::ofstream ofs(output.c_str());
    
    std::cout << "New file: " << std::endl << "__________" << std::endl;
    for (std::string line; std::getline(ifs, line);)
    {
        replace(line, occ1, occ2);
        ofs << line;
        if (!ifs.eof())
            ofs << std::endl;
        std::cout << line << std::endl;
    }
    std::cout << "__________" << std::endl;
    
    ifs.close();
    ofs.close();
    std::cout << "File \"" + input + "\" has been closed" << std::endl; 
    return (0);
}
