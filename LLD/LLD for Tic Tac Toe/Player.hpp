#include <string>

class Player
{
private:
    std::string name;
    char symbol;

public:
    Player(std::string name, char playerSymbol);
    virtual std::string getName();
    virtual char getSymbol();
};