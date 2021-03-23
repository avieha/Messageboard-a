#include <iostream>
#include <stdexcept>
#include "doctest.h"
#include <vector>
#include "Direction.hpp"
#include "Board.hpp"

using namespace std;
using namespace ariel;

Board board;

TEST_CASE("Horizontal Check"){
    board.post(0,0,Direction::Horizontal,"check");
    CHECK(board.read(0,0,Direction::Horizontal,5)=="check");
    CHECK(board.read(1,0,Direction::Horizontal,5)=="_____");
    board.post(0,1,Direction::Horizontal,"check");
    CHECK(board.read(0,0,Direction::Horizontal,6)=="ccheck");
    board.post(0,0,Direction::Horizontal,"_");
    CHECK(board.read(0,0,Direction::Horizontal,6)=="_check");
    board.post(1,0,Direction::Horizontal,"check2");
    CHECK(board.read(1,5,Direction::Horizontal,1)=="2");
    board.post(1,0,Direction::Horizontal,"22222");
    CHECK(board.read(0,0,Direction::Horizontal,6)=="222222");
    board.post(2,2,Direction::Horizontal,"#");
    CHECK(board.read(2,1,Direction::Horizontal,3)=="_#_");
    board.post(3,0,Direction::Horizontal,"fivech");
    CHECK(board.read(3,3,Direction::Horizontal,3)=="ech");
    board.post(4,0,Direction::Horizontal,"!@#$%^");
    CHECK_FALSE(board.read(4,0,Direction::Horizontal,4)=="____");
    board.post(0,0,Direction::Horizontal,"a");
    CHECK_FALSE(board.read(0,0,Direction::Horizontal,6)=="_check");
    CHECK_FALSE(board.read(3,3,Direction::Horizontal,2)=="ee");
}

TEST_CASE("Vertical Check"){
    CHECK(board.read(0,0,Direction::Vertical,5)=="a2_f!");
    board.post(1,3,Direction::Vertical,"check");
    CHECK(board.read(0,1,Direction::Vertical,5)=="c2_i@");
    CHECK_FALSE(board.read(0,1,Direction::Vertical,5)=="c2 i@");
    board.post(2,2,Direction::Vertical,"!");
    CHECK(board.read(0,2,Direction::Vertical,6)=="h2!v#_");
    CHECK(board.read(1,3,Direction::Vertical,4)=="chec");
    CHECK_FALSE(board.read(0,3,Direction::Vertical,3)=="ehh");
    board.post(0,4,Direction::Vertical,"c2_c%_");
    CHECK(board.read(0,4,Direction::Vertical,6)=="c2_c%_");
    board.post(0,4,Direction::Vertical,"c2_c%-");
    CHECK_FALSE(board.read(0,4,Direction::Vertical,6)=="c2_c%_");
    CHECK(board.read(0,0,Direction::Vertical,5)=="c2_c%_");
    board.post(0,0,Direction::Vertical,"");
    CHECK(board.read(0,5,Direction::Vertical,6)=="k2_h1_");
}