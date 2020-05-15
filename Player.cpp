#include "Player.hpp"

namespace chomp {
    Player::Player(std::string name)
    {
      this->name = name;
    };
    std::ostream& operator<<(std::ostream& os, const Player& obj)
{
      os << obj.name;
      return os;
}
	};
