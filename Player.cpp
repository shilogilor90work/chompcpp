#include "Player.hpp"

namespace chomp {
    Player::Player(std::string name)
    {
      this->name = name;
    };

	};
  inline std::ostream& operator<<(std::ostream &out, const chomp::Player& p)
  {
      out << p.name;
      return out;
  };
