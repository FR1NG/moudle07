/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchakoub <hchakoub@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 18:07:54 by hchakoub          #+#    #+#             */
/*   Updated: 2022/08/29 14:04:33 by hchakoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//
// Created by Hamza Chakoubi on 8/28/22.
//

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <exception>

template<class T>
class Array {
private:
    T *_arr;
    unsigned int _s;
public:
    Array();
    Array(const unsigned int length);
    Array(const Array<T> &arr);
    Array<T> &operator=(const Array<T> &arr);
    T &operator[](int i);
    ~Array();

    unsigned int size() const;

};
#include "Array.tpp"
#endif //ARRAY_HPP
