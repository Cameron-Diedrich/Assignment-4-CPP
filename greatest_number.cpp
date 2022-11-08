// Copyright (c) 2021 Cameron Diedrich All rights reserved

// Created by: Cameron Diedrich
// Created on: November 2022
// This program finds the greatest of three numbers

#include <iostream>
using namespace std;

int main() {
    float n1, n2, n3;

    cout << "Enter three numbers: ";
    cin >> n1 >> n2 >> n3;

    if (n1 >= n2 && n1 >= n3)
        cout << "Largest number: " << n1;

    if (n2 >= n1 && n2 >= n3)
        cout << "Largest number: " << n2;

    if (n3 >= n1 && n3 >= n2)
        cout << "Largest number: " << n3;

    return 0;
}