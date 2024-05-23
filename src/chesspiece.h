#pragma once
/*
 * board.h
 */
#ifndef CHESSPIECE_H_
#define CHESSPIECE_H_

#include <iostream>
#include <fstream>
#include <string>
#include <tuple>
#include <vector>
#include <algorithm>
#include <cmath>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <cctype>

#include "utils.h"

using namespace std;


// NOTE: DO NOT CHANGE `Chesspiece` CLASS EXCEPT THE RETURN TYPE OF `get_possible_moves()`
class ChessPiece
{
public:
    ChessPiece(string, string, int, int, int=0);
    ChessPiece(const ChessPiece& other);
    friend ostream& operator<<(ostream& os, const ChessPiece& piece);

    string get_color() { return color; }
    string get_type() { return type; }

    int get_x() { return x; }
    int get_y() { return y; }
    int get_flag() { return flag; }

    void set_x(int x) { this->x = x; }
    void set_y(int y) { this->y = y; }
    void set_flag(int flag) { this->flag = flag; }

    virtual void move(int x, int y) { this->x = x; this->y = y; };

    // NOTE: YOU CAN MODIFY THE RETURN TYPE OF THE FUNCTION BELOW
    virtual vector<tuple<MoveType, Direction, int>> get_possible_moves() = 0; 

protected:
    string color;
    string type;
    int x;
    int y;
    int flag;
};

ChessPiece* create_piece(string color, string type, int x, int y, int flag=0);

// NOTE: INHERIT ChessPiece CLASS AND IMPLEMENT CLASSES
// NOTE: FILL FREE TO ADD ANY MEMBER VARIABLES OR FUNCTIONS

class King : public ChessPiece
{
    // TODO
};

class Queen : public ChessPiece
{
    // TODO
};

class Rook : public ChessPiece
{
    // TODO
};

class Bishop : public ChessPiece
{
    // TODO
};

class Knight : public ChessPiece
{
    // TODO
};

class Pawn : public ChessPiece
{
    // TODO
};

// NOTE: YOU CAN ADD OTHER FUNCTIONS HERE

#endif /* CHESSPIECE_H_ */