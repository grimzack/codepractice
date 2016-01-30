#ifndef PLAYER_H
#define PLAYER_H

#include <stdlib.h>
#include <iostream>
#include <vector>

using namespace std;

class Player
{
public:
    Player();
    ~Player();

    Player( Chair iSeat );

    vector<string> * hand;
    bool isDealer;
    int seat;

    enum Chair {
        Chair_North,
        Chair_East,
        Chair_South,
        Chair_West
    };
};

#endif // PLAYER_H
