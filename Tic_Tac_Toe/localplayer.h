#ifndef LOCALPLAYER_H
#define LOCALPLAYER_H

#include "player.h"

namespace TicTacToeSemKirkels
{
    class LocalPlayer : public Player
    {
        public:
            LocalPlayer();
            int placeSymbol(void);      // Stores the logic for local player
            ~LocalPlayer();
    };
}

#endif // LOCALPLAYER_H
