#include <iostream>
#include "game.h"

using namespace std;

int main(int argc, char *argv[])
{

    // TODO: play();
    Deck * test = new Deck();
    test->ShowDeck();
    delete test;
    return 0;
}
