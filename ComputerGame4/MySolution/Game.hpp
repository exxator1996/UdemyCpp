// Include guard
#pragma once
#include <cstdint>

constexpr static char LEFT = 'a';
constexpr static char RIGHT = 'd';
constexpr static std::uint16_t field_start = 0;
constexpr static std::uint16_t field_end = 9;

bool is_finished(const std::uint32_t player_position);

void print_game_state(const std::uint32_t player_position);

void execute_move(std::uint32_t &player, const char move);

void game();
