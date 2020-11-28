// Copyright (c) 2020 Marlon Poddalgoda, All rights reserved
//
// Created by Marlon Poddalgoda
// Created on November 2020
// This program adds 2 user inputted numbers

#include <iostream>

int main() {
    // this function calculates the sum of 2 user inputs

    // variable declarations
    int firstNumber;
    int secondNumber;
    int answer;

    // input
    std::cout << "Enter your first number: ";
    std::cin >> firstNumber;
    std::cout << "Enter your second number: ";
    std::cin >> secondNumber;

    // process
    answer = firstNumber + secondNumber;

    // output
    std::cout << "" << std::endl;
    std::cout << firstNumber << " + " << secondNumber << " = "
              << answer << std::endl;
}
