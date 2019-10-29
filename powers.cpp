// Copyright (c) 2019 St. Mother Teresa HS All rights reserved.
//
// Created by: Teddy Sannan
// Created on: October 2019
// This program adds up to a number
// with user input

#include <iostream>
#include <cstdlib>
#include <string>
#include <cmath>

int main() {
    int totalNumber = 0;
    int powerOfNumber;
    std::string numberAsString;
    int numberAsNumber;

    std::cout << "Input a number: ";
    std::cin >> numberAsString;

    try {
        numberAsNumber = std::stoi(numberAsString);
        if (numberAsNumber > 0) {
            for (powerOfNumber = 0; powerOfNumber < numberAsNumber + 1; powerOfNumber++) {
                // process
                totalNumber = (pow(powerOfNumber, 2));
                std::cout << powerOfNumber << "^2 = " << totalNumber << std::endl; }
        } else {
            std::cout << "" << std::endl;
            std::cout << "Not a positive number" << std::endl; }
    }  catch (std::invalid_argument) {
            std::cout << "" << std::endl;
            std::cout << "Invalid Input" << std::endl;
    }
}
