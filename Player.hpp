#pragma once
#include "Game.hpp"
// // ************************************************
// // remove b4 handing in
// typedef unsigned int uint;
// // ************************************************
namespace chomp {

  	class Player
    {
      public:
          std::string name;
          Player(std::string);
          virtual std::tuple<uint,uint> move(const ChompGame& game)=0;
    };
	};
  std::ostream& operator<<(std::ostream &out, const chomp::Player& p);
