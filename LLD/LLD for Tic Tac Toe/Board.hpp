#ifndef board_hpp
#define board_hpp

#include <vector>
using namespace std;

class Board
{
    vector<vector<char>> grid;
    int size;

public:
    Board(int boardSize);
    virtual void print();
    virtual bool isValidMove(int row, int col);
    virtual bool isFull();
    virtual void update(int row, int col, char symbol);

    virtual bool checkWinner();
};

#endif