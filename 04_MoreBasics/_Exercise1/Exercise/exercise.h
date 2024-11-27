#pragma once
#include <cstdint>
#include <iostream>

enum class team_membership {
  ALLIED,
  ENEMY,
};
struct PlayerData {
  std::uint32_t id;
  float x_pos;
  float y_pos;
  std::uint32_t health;
  std::uint32_t energy;
  team_membership team;
};

void printPlayerPosition(const PlayerData& player);
