// Copyright (c) 2023 Marli Peters All Rights Reserved
// Created by: Marli Peters
// Date: Nov. 24, 2023
// This program creates a function that asks user for the temperature
// in celsius then converts it into fahrenheit and displays it for them.
#include <iostream>

void TempConvert() {
    // define variables
    float tempCFloat, tempF;
    std::string tempCString;

    // get temperature in celsius

    std::cout
        << "Enter temperature in celsius: ";
    std::cin >> tempCString;

    // catch invalid entries

    try {
        tempCFloat = std::stoi(tempCString);
        // calculate temperature in fahrenheit
        tempF = 1.8 * tempCFloat + 32;
        // display temperature in fahrenheit
        std::cout << "The temperature in fahrenheit is: " << tempF << std::endl;
    } catch (std::invalid_argument) {
        std::cout << "Please enter valid temperature.";
    }
}

int main() {
    // call function
    TempConvert();
}
