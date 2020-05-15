#pragma once

#include <iostream>
#include <complex>
#include <cstdlib>
#include "Player.hpp"

namespace chomp{
  Player& play(uint row, uint column, Player& player1, Player& player2);
};
