#include "Board.hpp"
#include <iostream>

Board::Board(int boardSize)
{
    this->size = boardSize;
    grid = vector<vector<char>>(boardSize, vector<char>(boardSize, ' '));
}

bool Board::isValidMove(int row, int col)
{
    if (row < 0 || row >= size || col < 0 || col >= size)
        return false;
    return (grid[row][col] == ' ');
}

void Board::print()
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cout << grid[i][j] << " ";
        }
        cout << endl;
    }
}

bool Board::isFull()
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (grid[i][j] == ' ')
                return false;
        }
    }
    return true;
}

void Board::update(int row, int col, char symbol)
{
    if (grid[row][col] == ' ')
    {
        grid[row][col] = symbol;
    }
}

bool Board::checkWinner()
{
    // check all the 3 rows for win
    for (int i = 0; i < size; i++)
    {
        char symb = grid[i][0];
        bool win = true;
        if (symb == ' ')
            continue;
        for (int j = 1; j < size; j++)
        {

            if (grid[i][j] != symb)
            {
                win = false;
                break;
            }
        }
        if (win)
            return true;
    }
    // check all the 3 cols for win
    for (int i = 0; i < size; i++)
    {
        char symb = grid[0][i];
        bool win = 1;
        if (symb == ' ')
            continue;
        for (int j = 1; j < size; j++)
        {
            if (grid[j][i] != symb)
            {
                win = false;
                break;
            }
        }
        if (win)
            return true;
    }
    // check both the diagonals for win
    if (grid[0][0] != ' ' && (grid[0][0] == grid[1][1]) && (grid[1][1] == grid[2][2]))
    {
        return true;
    }
    if (grid[0][2] != ' ' && (grid[0][2] == grid[1][1]) && (grid[1][1] == grid[2][0]))
    {
        return true;
    }

    return false;
}
