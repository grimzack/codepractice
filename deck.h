#ifndef DECK_H
#define DECK_H

#include <iostream>
#include <string>
#include <stack>
#include <stdlib.h>     /* rand */
#include <vector>

using namespace std;

class Deck
{
public:
    Deck();
    vector<string> cards;
    stack<string> playDeck;

    void Shuffle();
    void Deal( void * ipHandA, void * ipHandB, void * ipHandC, void * ipHandD );
    void ShowDeck();

};

#endif // DECK_H
