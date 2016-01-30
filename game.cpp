#include "game.h"

Game::Game()
{
    // Set score to 0
    blackScore = 0;
    whiteScore = 0;

    // Declare new player objects
    north = new Player(Player::Chair_North);
    east = new Player(Player::Chair_East);
    south = new Player(Player::Chair_South);
    west = new Player(Player::Chair_West);

    // Initialize the deck
    cards = new Deck();
}

Game::~Game()
{
    delete north;
    delete east;
    delete south;
    delete west;
    delete cards;
}

void Game::Start()
{
    // For the first turn, north is dealer
    north->isDealer = true;

    // Play!
    this->Play();
}

void Game::Play()
{
    /* Steps:
     *  Shuffle cards
     *  Deal cards
     *  Take turns
     */
    while ( (blackScore < 10) && (this->whiteScore < 10) )
    {
        // Shuffle cards
        cards->Shuffle();

        // Deal cards
        cards->Deal( north->hand, east->hand, south->hand, west->hand );

        //
    }
}
