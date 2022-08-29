/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchakoub <hchakoub@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 15:45:05 by hchakoub          #+#    #+#             */
/*   Updated: 2022/08/28 15:45:06 by hchakoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//
// Created by Hamza Chakoubi on 8/28/22.
//

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template<typename T>
void    iter(T *arr, unsigned int length, void(*func)(T&)) {
    for (unsigned int i = 0; i < length; i++)
        func(arr[i]);
}
#endif //ITER_HPP
