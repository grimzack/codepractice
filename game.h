#ifndef GAME_H
#define GAME_H

#include "deck.h"
#include "player.h"

class Game
{
public:
    Game();
    ~Game();
    int blackScore;
    int whiteScore;

    Player * north;
    Player * east;
    Player * south;
    Player * west;

    Deck * cards;

    void Start();
};

#endif // GAME_H
