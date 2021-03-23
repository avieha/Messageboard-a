#include <iostream>
#include <string>
#include <stdexcept>
#include "Direction.hpp"
#include "Board.hpp"
using ariel::Direction;
using namespace std;

namespace ariel
{
    Board::Board(){};
    void Board::post(unsigned int row, unsigned int column, ariel::Direction d, string s){};
    string Board::read(unsigned int row, unsigned int column, ariel::Direction d, unsigned int num) { return "-read-"; };
    string Board::show() { return "-show-"; };
    Board::~Board(){};
}