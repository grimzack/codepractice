#ifndef DECK_H
#define DECK_H


class Deck
{
public:
    Deck();
    char * cards[24];

    void Shuffle( void );
    void Deal( void * ipHandA, void * ipHandB, void * ipHandC, void * ipHandD );

};

#endif // DECK_H
