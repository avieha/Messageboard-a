// #pragma once
#include <iostream>
#include <stdexcept>
#include <vector>
#include <string>
#include "Direction.hpp"

using namespace std;

namespace ariel
{
    class Board
    {
    private:
        // unsigned int row;
        // unsigned int column;
        // vector<vector<char>> board;

    public:
        Board();
        ~Board();
        void post(unsigned int row, unsigned int column, Direction d, string const &s);
        string read(unsigned int row, unsigned int column, Direction d, unsigned int num);
        string show();
    };
}