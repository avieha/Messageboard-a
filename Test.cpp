#include <iostream>
#include <stdexcept>
#include "doctest.h"
#include <vector>
#include "Direction.hpp"
#include "Board.hpp"

using namespace std;
using namespace ariel;

Board board;

TEST_CASE("good post"){
    board.post(0,0,Direction::Horizontal,"aviem");
    CHECK(board.read(0,0,Direction::Horizontal,5)=="aviem");
    CHECK(board.read(1,0,Direction::Horizontal,5)=="");
    board.post(0,0,Direction::Horizontal,"aviem");
    CHECK(board.read(0,0,Direction::Horizontal,5)=="aviem");
    board.post(0,0,Direction::Horizontal,"aviem");
    CHECK(board.read(0,0,Direction::Horizontal,5)=="aviem");
    board.post(0,0,Direction::Horizontal,"aviem");
    CHECK(board.read(0,0,Direction::Horizontal,5)=="aviem");
    board.post(0,0,Direction::Horizontal,"aviem");
    CHECK(board.read(0,0,Direction::Horizontal,5)=="aviem");
    board.post(0,0,Direction::Horizontal,"aviem");
    CHECK(board.read(0,0,Direction::Horizontal,5)=="aviem");
    board.post(0,0,Direction::Horizontal,"aviem");
    CHECK(board.read(0,0,Direction::Horizontal,5)=="aviem");
    board.post(0,0,Direction::Horizontal,"aviem");
    CHECK(board.read(0,0,Direction::Horizontal,5)=="aviem");
    board.post(0,0,Direction::Horizontal,"aviem");
    CHECK(board.read(0,0,Direction::Horizontal,5)=="aviem");
    board.post(0,0,Direction::Horizontal,"aviem");
    CHECK(board.read(0,0,Direction::Horizontal,5)=="aviem");
    board.post(0,0,Direction::Horizontal,"aviem");
    CHECK(board.read(0,0,Direction::Horizontal,5)=="aviem");
    board.post(0,0,Direction::Horizontal,"aviem");
    CHECK(board.read(0,0,Direction::Horizontal,5)=="aviem");
    board.post(0,0,Direction::Horizontal,"aviem");
    CHECK(board.read(0,0,Direction::Horizontal,5)=="aviem");
    board.post(0,0,Direction::Horizontal,"aviem");
    CHECK(board.read(0,0,Direction::Horizontal,5)=="aviem");
    board.post(0,0,Direction::Horizontal,"aviem");
    CHECK(board.read(0,0,Direction::Horizontal,5)=="aviem");
    board.post(0,0,Direction::Horizontal,"aviem");
    CHECK(board.read(0,0,Direction::Horizontal,5)=="aviem");
    board.post(0,0,Direction::Horizontal,"aviem");
    CHECK(board.read(0,0,Direction::Horizontal,5)=="aviem");
    board.post(0,0,Direction::Horizontal,"aviem");
    CHECK(board.read(0,0,Direction::Horizontal,5)=="aviem");
    board.post(0,0,Direction::Horizontal,"aviem");
    CHECK(board.read(0,0,Direction::Horizontal,5)=="aviem");

}

// TEST_CASE(){

// }