#pragma once
#include "Player.hpp"

namespace chomp {

	class Winner: public Player {
		public:
			Winner(std::string name=""): Player("Winner["+name+"]") {}
			std::tuple<uint,uint> move(const ChompGame& game) override;
	};
}
