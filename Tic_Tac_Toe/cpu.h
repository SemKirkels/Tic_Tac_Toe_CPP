#ifndef CPU_H
#define CPU_H


#include "player.h"

class CPU : public Player
{
    public:
        CPU();
        int placeSymbol(void);
        ~CPU();
    protected:
        int location;
};

#endif // CPU_H
