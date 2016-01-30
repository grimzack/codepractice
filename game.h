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
    Player * middle;

    Deck * cards;

    void Start();
    void Play();
};

#endif // GAME_H
