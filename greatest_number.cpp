// Copyright (c) 2021 Cameron Diedrich All rights reserved

// Created by: Cameron Diedrich
// Created on: November 2022
// This program finds the greatest of three numbers

#include <iostream>
using namespace std;

int main() {
    int num1, num2, num3;

    // input
    std::cout << " Enter value for first number:";
    std::cin >> num1;
    std::cout << " Enter value for second number:";
    std::cin >> num2;
    std::cout << " Enter value for third number:";
    std::cin >> num3;

    // process and out put
    if (num1 > num2 && num1 > num3) {
        std::cout << " First number is greatest:" << std::endl;
    } else if (num2 > num1 && num2 > num3) {
        std::cout << " Second number is greatest" << std::endl;
    } else {
        std::cout << " Third number is greatest" << std::endl;
    }
    std::cout << ("\nDone.") << std::endl;
}
