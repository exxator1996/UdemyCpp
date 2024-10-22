#include <cstdint>
#include <iostream>

int main()
{
    char LEFT = 'a';
    char RIGHT = 'd';

    char move = 0;

    std::cin >> move;

    if (move == LEFT) {
        std::cout << "The Player moved to the left!" << std::endl;
    }
    else if (move == RIGHT) {
        std::cout << "The Player moved to the right!" << std::endl;
    }
    else {
        std::cout << "Unrecognized move!" << std::endl;
    }

    return 0;
}
