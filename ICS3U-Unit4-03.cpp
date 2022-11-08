// Copyright(c) 2022 Evgeny Vovk All rights reserved.
//
// Created by : Evgeny Vovk
// Created on : November 2022
// ICS3U-Unit4-03.cpp File,
// learning for... statement in C++.

#include <iostream>
#include <string>
#include <cmath>

int main() {
    // creating variables
    std::string inputNumber;
    int numberAsInt;
    int counter;

    // input
    std::cout << "Input a positive number: ";
    std::cin >> inputNumber;

    // process and output
    std::cout << "\n";
    try {
        numberAsInt = std::stoi(inputNumber);
        if (numberAsInt < 0) {
            std::cout << "This is not a positive number.";
        } else {
            for (counter = 0; counter <= numberAsInt; counter++) {
                std::cout << counter << "² = " << pow(counter, 2) << "\n";
            }
        }
    } catch (std::invalid_argument) {
        std::cout << "Invalid input, please try again following the requirements";
    }

    std::cout << "\n\nDone.\n";
}
