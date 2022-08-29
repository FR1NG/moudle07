/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchakoub <hchakoub@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 18:07:58 by hchakoub          #+#    #+#             */
/*   Updated: 2022/08/29 15:56:36 by hchakoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_TPP
#define ARRAY_TPP

template<class T>
Array<T>::Array():_arr(new T[0])
{
}

template<class T>
Array<T>::Array(unsigned int length):_arr(new T[length]), _s(length) {
    for (unsigned int i = 0; i < length; i++)
        this->_arr[i] = 0;
}

template<class T>
Array<T>::Array(const Array &arr)
{
    this->_s = arr.size();
    this->_arr = new T[arr.size()];
    for (unsigned int i = 0; i < this->_s; i++)
        this->_arr[i] = arr._arr[i];
}

template<class T>
T &Array<T>::operator[](int i) {
    if (i < 0 || i >= static_cast<int>(this->_s))
        throw std::exception();
    return this->_arr[i];
}

template<class T>
Array<T> &Array<T>::operator=(const Array &arr) {
    if (this == &arr)
        return (*this);
    delete [] this->_arr;
    this->_arr = new T[arr.size()];
    for(unsigned int i = 0; i < arr.size(); i++)
        this->_arr[i] = arr._arr[i];
    this->_s = arr.size();
    return (*this);
}

template<class T>
Array<T>::~Array() {
    delete [] this->_arr;
}

template<class T>
unsigned int Array<T>::size() const {
    return this->_s;
}

#endif