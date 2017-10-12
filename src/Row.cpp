#include "Row.h"

Row::Row() : one(0), two(0) {};

Row::Row(int x, int y)
{
    one = x;
    two = y;
};

Row::~Row() {};

Row::Row(const Row& other)
{
    one = other.one;
    two = other.two;
};


