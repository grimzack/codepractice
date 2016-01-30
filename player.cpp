#include "player.h"

Player::Player(Chair iSeat)
{
    hand = new vector<string>(5);
    seat = iSeat;
    isDealer = 0;
}

// Destructor
Player::~Player()
{
    delete hand;
}
