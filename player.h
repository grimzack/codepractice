#ifndef PLAYER_H
#define PLAYER_H


class Player
{
public:
    Player();

    char * hand[5];
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
