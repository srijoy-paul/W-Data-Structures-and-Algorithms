#include "Game.hpp"
#include <iostream>
using namespace std;
Board Game::board(3); // see once
Game::Game() : players(Player("Player1", 'X'),
                       Player("Player2", 'O')) // constructor initialization list
{
    currPlayerindx = 0;
}

Player Game::getCurrentPlayer()
{
    if (currPlayerindx == 0)
        return players.first;
    else
        return players.second;
}

void Game::switchPlayer()
{
    currPlayerindx = !currPlayerindx;
}

void Game::play()
{
    int row, col;
    while (!board.isFull())
    {
        board.print();
        cout << getCurrentPlayer().getName() << " (" << getCurrentPlayer().getSymbol() << ")" << ", Enter your move in terms of row and column:";
        cin >> row >> col;

        if (board.isValidMove(row, col))
        {
            board.update(row, col, getCurrentPlayer().getSymbol());

            // after each move we can check if this was a winning move
            if (board.checkWinner())
            {
                board.print();
                cout << getCurrentPlayer().getName() << " wins!" << endl;
                return;
            }

            switchPlayer();
        }
        else
        {
            cout << "Invalid move. Try again." << endl;
        }
    }
    board.print();
    cout << "It's a draw!" << endl;
}