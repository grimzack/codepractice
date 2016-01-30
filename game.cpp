#include "game.h"
#include "deck.h"
#include "player.h"

Game::Game()
{
    blackScore = 0;
    whiteScore = 0;
    north = new Player(Player.Chair_North);
    east = new Player(Player.Chair_East);
    south = new Player(Player.Chair_South);
    west = new Player(Player.Chair_West);
}

void Game::Start()
{
    /* Steps:
     *  Shuffle cards
     *  Deal cards
     *  Take turns
     */

    //
}
