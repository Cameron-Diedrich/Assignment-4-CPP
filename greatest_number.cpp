// Copyright (c) 2021 Cameron Diedrich All rights reserved

// Created by: Cameron Diedrich
// Created on: November 2022
// This program finds the greatest of three numbers

#include <iostream>

int main() {
    float n1, n2, n3;

    // input
    std::cout << "Enter first number: " << std::endl;
    std::cout << "Enter second number: " << std::endl;
    std::cout << "Enter third number: " << std::endl;

    // process and output
    if (n1 >= n2 && n1 >= n3)
        std::cout << "Largest number: " << n1;

    if (n2 >= n1 && n2 >= n3)
        std::cout << "Largest number: " << n2;

    if (n3 >= n1 && n3 >= n2)
        std::cout << "Largest number: " << n3;

    std::cout << "\n\nDone.\n";
}