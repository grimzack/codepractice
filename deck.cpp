#include "deck.h"

using namespace std;

Deck::Deck()
{

    //cards = new vector(4, vector<string>(6));
    //cards = new char[4][6];
    /*cards = {
        "As", "Ks", "Qs", "Js", "10s", "9s",
        "Ah", "Kh", "Qh", "Jh", "10h", "9h",
        "Ac", "Kc", "Qc", "Jc", "10c", "9c",
        "Ad", "Kd", "Qd", "Jd", "10d", "9d",
    };*/

    vector<string> cardDeck(24);
    cards = cardDeck;

    // Spades
    cards[0] = "As";
    cards[1] = "Ks";
    cards[2] = "Qs";
    cards[3] = "Js";
    cards[4] = "10s";
    cards[5] = "9s";

    // Hearts
    cards[6] = "Ah";
    cards[7] = "Kh";
    cards[8] = "Qh";
    cards[9] = "Jh";
    cards[10] = "10h";
    cards[11] = "9h";

    // Clubs
    cards[12] = "Ac";
    cards[13] = "Kc";
    cards[14] = "Qc";
    cards[15] = "Jc";
    cards[16] = "10c";
    cards[17] = "9c";

    // Diamonds
    cards[18] = "Ad";
    cards[19] = "Kd";
    cards[20] = "Qd";
    cards[21] = "Jd";
    cards[22] = "10d";
    cards[23] = "9d";
}

// Put the cards into random order
void Deck::Shuffle()
{
    vector<string> shuffleDeck(24);
    for (int i = 0; i < cards.size(); i++)
    {
        shuffleDeck[i] = cards[i];
    }

    random_shuffle(shuffleDeck.begin(), shuffleDeck.end());

    for (int j = 0; j < 24; j++)
    {
        playDeck.push(shuffleDeck[j]);
    }

}

void Deck::ShowDeck()
{
    string curCard = "";
    string regCard = "";
    for (int i = 0; i < 24; i++)
    {
        curCard = playDeck.top();
        regCard = cards[i];
        cout << "Card#: " << i <<
                "... Unshuffled = " << regCard <<
                "... Shuffled = " << curCard << "\n";
        playDeck.pop();
    }
}

void Deck::Deal(vector<string> *ipHandA,
                vector<string> *ipHandB,
                vector<string> *ipHandC,
                vector<string> *ipHandD,
                vector<string> *ipHandExtra)
{
    while ( !(playDeck.empty()) )
    {
        ipHandA->push_back(playDeck.top());
        playDeck.pop();
    }
}
