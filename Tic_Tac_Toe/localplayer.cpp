#include "localplayer.h"

LocalPlayer::LocalPlayer()
{

}

int LocalPlayer::placeSymbol()
{
    while(1)
    {
        cin >> location;
        if(location > 0 && location < 10)
        {
            return location;
        }
        else
        {
            std::cout << "Invalid Input" << std::endl;
        }
    }
}

LocalPlayer::~LocalPlayer()
{

}
