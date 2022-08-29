/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchakoub <hchakoub@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 15:44:37 by hchakoub          #+#    #+#             */
/*   Updated: 2022/08/28 15:44:38 by hchakoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//
// Created by Hamza Chakoubi on 8/28/22.
//

#include "iter.hpp"

template<typename T>
void print(T x)
{
    std::cout << x << std::endl;
}

int main()
{
    std::string names[8] = {"hamza", "mohammed", "maati", "el mahdi", "abdessalam", "arbi", "bachir", "ahmed"};
    int ages[8] = {27, 33, 34, 42, 45, 47, 49, 52};
    ::iter(names, 8, print);
    ::iter(ages, 8, print);
}