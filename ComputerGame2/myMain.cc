#include <cstdint>
#include <iostream>

int main() {
  char LEFT = 'a';
  char RIGHT = 'd';

  char move = 0;

  std::uint16_t player_postion = 0;

  const std::uint16_t field_start = 0;
  const std::uint16_t field_end = 9;

  while (player_postion < field_end) {
    // Update Screen
    for (int i = field_start; i <= field_end; i++) {
      if (i == player_postion) {
        std::cout << "P";
      } else if (i == field_start || i == field_end) {
        std::cout << "|";
      } else {
        std::cout << ".";
      }
    }

    // Move Player
    std::cin >> move;

    if (move == LEFT && player_postion != field_start) {
      player_postion--;
      std::cout << "The Player moved to the left!" << std::endl;
    } else if (move == RIGHT && player_postion != field_end) {
      player_postion++;
      std::cout << "The Player moved to the right!" << std::endl;
    } else {
      std::cout << "Unrecognized move!" << std::endl;
    }
  }

  std::cout << "The Player reached the goal!" << std::endl;
  return 0;
}
