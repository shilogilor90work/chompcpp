#pragma once
#include "Game.hpp"
// ************************************************
// remove b4 handing in
typedef unsigned int uint;
// ************************************************
namespace chomp {

  	class Player
    {
      public:
          std::string name;
          Player(std::string);
          virtual std::tuple<uint,uint> move(const ChompGame& game);
    };
    std::ostream &operator<<(std::ostream &os, Player const &m);

	};
