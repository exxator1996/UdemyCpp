#include <iostream>

#include "exercise.h"

int main()
{
    const auto player1 = PlayerData{1,4,5,100,50,team_membership::ALLIED};
    const auto player2 = PlayerData{2,3,8,100,50,team_membership::ENEMY};

    printPlayerPosition(player1);
    printPlayerPosition(player2);
    return 0;
}
