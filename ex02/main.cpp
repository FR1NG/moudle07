/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchakoub <hchakoub@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 14:01:02 by hchakoub          #+#    #+#             */
/*   Updated: 2022/08/29 15:56:55 by hchakoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//
// Created by Hamza Chakoubi on 8/29/22.
//

#include <iostream>
#include "Array.hpp"


#define MAX_VAL 750
int main(int, char**)
{
    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }
    //SCOPE
    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }
    delete [] mirror;//
    return 0;
}

//int main()
//{
//    Array<int> *arr = new Array<int>(5);
//
//    try
//    {
//        std::cout << (*arr)[1] << std::endl;
//    }
//    catch(const std::exception& e)
//    {
//        std::cerr << e.what() << '\n';
//        std::cout << "index is out of bounds." << std::endl;
//    }
//
//    std::cout << "array size : " << arr->size() << std::endl;
//
//    delete arr;
//
//    Array<float> *f = new Array<float>(3);
//
//     try
//    {
//        std::cout << (*f)[2] << std::endl;
//    }
//    catch(const std::exception& e)
//    {
//        std::cerr << e.what() << '\n';
//        std::cout << "index is out of bounds." << std::endl;
//    }
//
//    std::cout << "array size : " << f->size() << std::endl;
//
//    delete f;
//
//    Array<char> *c = new Array<char>(9);
//
//     try
//    {
//        std::cout << "'" << (*c)[5] << "'" << std::endl;
//    }
//    catch(const std::exception& e)
//    {
//        std::cerr << e.what() << '\n';
//        std::cout << "index is out of bounds." << std::endl;
//    }
//
//    std::cout << "array size : " << c->size() << std::endl;
//
//    delete c;
//
//}