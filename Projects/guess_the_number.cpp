#include <iostream>
#include <ctime>

// This program fails spectacularly if the user decides to guess anything
// other than an integer. Otherwise it works great.

int main() {
    std::srand(std::time(NULL));
    const int num = std::rand() % 100 + 1;
    int guess{};
    std::cout << "Guess an integer between 1 and 100: " << std::endl;
    std::cin >> guess;
    while(guess!=num) {
        if ((guess<1) || (guess>100)) {
            std::cout << "Out of range. Please guess an integer between 1 and 100: "
            << std::endl;
        }
        else if (guess<num) {
            std::cout << "Too low. Guess again: " << std::endl;
        }
        else if (guess>num) {
            std::cout << "Too high. Guess again: " << std::endl;
        }
        std::cin >> guess;
    }
    std::cout << "Congrats, you guessed correctly!" << std::endl;
    return 0;
}
