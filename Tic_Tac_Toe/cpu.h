#ifndef CPU_H
#define CPU_H

#include "player.h"

class CPU : public Player
{
    public:
        CPU();
        void placeSymbol(void);
        ~CPU();
};

#endif // CPU_H