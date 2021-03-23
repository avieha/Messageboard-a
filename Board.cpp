#include <iostream>
#include <string>
#include <stdexcept>
#include <vector>
#include "Direction.hpp"
#include "Board.hpp"
using ariel::Direction;
using namespace std;

namespace ariel
{
    Board::Board(){};
    void Board::post(unsigned int row, unsigned int column, ariel::Direction d, string const &s){};
    string Board::read(unsigned int row, unsigned int column, ariel::Direction d, unsigned int num) { return"-";};
    string Board::show() { return "-"; };
    Board::~Board(){};
}