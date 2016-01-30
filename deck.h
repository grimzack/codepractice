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
    void Deal( vector<string> * ipHandA,
               vector<string> * ipHandB,
               vector<string> * ipHandC,
               vector<string> * ipHandD,
               vector<string> * ipHandExtra);
    void ShowDeck();

};

#endif // DECK_H
