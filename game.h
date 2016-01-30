#ifndef GAME_H
#define GAME_H


class Game
{
public:
    Game();
    int blackScore;
    int whiteScore;

    Player * north;
    Player * east;
    Player * south;
    Player * west;

    void Start();
};

#endif // GAME_H
