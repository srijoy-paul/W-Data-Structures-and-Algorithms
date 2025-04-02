#include "Board.hpp"
#include "Player.hpp"
// #include <>;

class Game
{
    static Board board; // see once
    pair<Player, Player> players;
    bool currPlayerindx;

public:
    Game();
    virtual Player getCurrentPlayer();
    virtual void play();
    virtual void switchPlayer();
};
