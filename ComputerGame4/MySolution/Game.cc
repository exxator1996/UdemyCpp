#include "Game.hpp"

#include <iostream>

bool is_finished(const std::uint32_t player_position){
    return player_position == field_end;
}

void print_game_state(const std::uint32_t player_position) {
  // Update Screen
  for (std::uint32_t i = field_start; i <= field_end; i++) {
    if (i == player_position) {
      std::cout << "P";
    } else if (i == field_start || i == field_end) {
      std::cout << "|";
    } else {
      std::cout << ".";
    }
  }
}

void execute_move(std::uint32_t &player_position, const char move){
     if (move == LEFT && player_position != field_start) {
      player_position--;
      std::cout << "The Player moved to the left!" << std::endl;
    } else if (move == RIGHT) {
      player_position++;
      std::cout << "The Player moved to the right!" << std::endl;
    } else {
      std::cout << "Unrecognized move!" << std::endl;
    }
}
void game() {
  char move = 0;
  std::uint32_t player_postion = 0;

  while (!is_finished(player_postion)) {
    print_game_state(player_postion);
    // Move Player
    std::cin >> move;
    execute_move(player_postion, move);
  }
  std::cout << "The Player reached the goal!" << std::endl;
}
