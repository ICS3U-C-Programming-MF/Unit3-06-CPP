// Copyright 2025 maximiliano fairman
// All rights reserved
// This program generates a random number between 0 and 9
// Use a random number generator
// to create a correct guess between 0 and
// every time the program is started over.

#include <iostream>
#include <limits>
#include <random>

int main() {
    std::cout << "Guess a number between 0 and 9: ";
    int guess;
    if (!(std::cin >> guess)) {
        std::cout << "Invalid input. Please enter an integer between 0 and 9." << std::endl;
    }

    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> distr(0, 9);
    int secret_number = distr(gen);

    if (guess == secret_number) {
        std::cout << "You guessed correctly!" << std::endl;
    } else {
        std::cout << "You guessed wrong" << std::endl;
    }

}