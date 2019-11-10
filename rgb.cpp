// Copyright (c) 2019 Matsuru All rights reserved.
//
// Created by: Matsuru Hoshi
// Created on: Nov 2019
// This program adds only positive numbers

#include <iostream>
#include <string>

main() {
    // This is adds only positive numbers

    // variables
    int red;
    int green;
    int blue;

    // Welcome statement
    std::cout << "Hi, I’ll print all possible RGB combinations"
    << std::endl;
    // input
    std::cout << "Press Enter to start." << std::endl;
    std::cin.ignore();

    // process
    for (red = 0; red < 255; red++) {
        for (green = 0; green < 255; green++) {
            for (blue = 0; blue < 255; blue++) {
                std::cout << "RGB: (" << red << ", " << green << ", " << blue <<
                             ")" << std::endl;
            }
        }
    }
}
