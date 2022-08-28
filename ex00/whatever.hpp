/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchakoub <hchakoub@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 15:30:40 by hchakoub          #+#    #+#             */
/*   Updated: 2022/08/28 15:42:24 by hchakoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


//
// Created by Hamza Chakoubi on 8/28/22.
//

#ifndef WHATEVER_HPP
#define WHATEVER_HPP
#include <iostream>

template<typename T>
void    swap(T &x, T &y) {
    T z;

    z = x;
    x = y;
    y = z;
}

template<typename T>
T  min(T x, T y) {
    return (x < y ? x : y);
}

template<typename T>
T  max(T x, T y) {
    return (x > y ? x : y);
}

#endif //WHATEVER_HPP
